package com.example.atividades.atividade15;

import okio.Path;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.io.TempDir;
import software.amazon.awssdk.services.rekognition.RekognitionClient;
import software.amazon.awssdk.services.rekognition.model.DetectTextRequest;
import software.amazon.awssdk.services.rekognition.model.DetectTextResponse;
import software.amazon.awssdk.services.rekognition.model.TextDetection;
import software.amazon.awssdk.services.rekognition.model.TextTypes;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;
import java.io.IOException;
import java.util.Collections;

import static org.junit.jupiter.api.Assertions.assertTrue;
import static org.mockito.ArgumentMatchers.any;
import static org.mockito.Mockito.*;

public class DetectTextImageTest {

    private RekognitionClient mockRekognitionClient;
    private DetectTextImage detectTextImage;

    @TempDir
    Path tempDir;

    @BeforeEach
    public void setUp() {
        mockRekognitionClient = mock(RekognitionClient.class);
        detectTextImage = new DetectTextImage("test-image-path", mockRekognitionClient);
    }

    @Test
    public void testDetectTextLabels() throws IOException {
        // Arrange
        TextDetection textDetection = TextDetection.builder()
                .detectedText("Test text")
                .confidence(99.0f)
                .id(1)
                .parentId(0)
                .type(TextTypes.WORD)
                .build();

        DetectTextResponse mockResponse = DetectTextResponse.builder()
                .textDetections(Collections.singletonList(textDetection))
                .build();

        when(mockRekognitionClient.detectText(any(DetectTextRequest.class)))
                .thenReturn(mockResponse);

        // Create a temporary file
        File tempFile = tempDir.resolve("result.txt").toFile();

        // Act
        detectTextImage.detectTextLabels(tempFile.getAbsolutePath());

        // Assert
        verify(mockRekognitionClient).detectText(any(DetectTextRequest.class));

        try (BufferedReader reader = new BufferedReader(new FileReader(tempFile))) {
            String line;
            boolean detectedTextFound = false;
            boolean confidenceFound = false;

            while ((line = reader.readLine()) != null) {
                if (line.contains("Detected: Test text")) {
                    detectedTextFound = true;
                }
                if (line.contains("Confidence: 99.0")) {
                    confidenceFound = true;
                }
            }

            assertTrue(detectedTextFound, "Detected text should be in the result file.");
            assertTrue(confidenceFound, "Confidence should be in the result file.");
        } catch (IOException e) {
            throw new RuntimeException(e);
        }
    }

}