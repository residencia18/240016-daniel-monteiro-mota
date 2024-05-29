package com.example.atividades.atividade08;

import org.junit.jupiter.api.Test;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertThrows;

public class StatisticsTest {

    @Test
    public void testCalculateAverage() {
        Statistics statistics = new Statistics();

        // Test case 1: Average of positive numbers
        List<Integer> numbers1 = Arrays.asList(1, 2, 3, 4, 5);
        assertEquals(3.0, statistics.calculateAverage(numbers1));

        // Test case 2: Average of negative numbers
        List<Integer> numbers2 = Arrays.asList(-1, -2, -3, -4, -5);
        assertEquals(-3.0, statistics.calculateAverage(numbers2));

        // Test case 3: Average of mixed positive and negative numbers
        List<Integer> numbers3 = Arrays.asList(-1, 2, -3, 4, -5);
        assertEquals(-0.6, statistics.calculateAverage(numbers3), 0.0001);

        // Test case 4: Average of one number
        List<Integer> numbers4 = Arrays.asList(10);
        assertEquals(10.0, statistics.calculateAverage(numbers4));

        // Test case 5: Average of zero
        List<Integer> numbers5 = Arrays.asList(0, 0, 0, 0, 0);
        assertEquals(0.0, statistics.calculateAverage(numbers5));
    }

    @Test
    public void testCalculateAverageWithEmptyList() {
        Statistics statistics = new Statistics();
        List<Integer> emptyList = new ArrayList<>();
        assertThrows(IllegalArgumentException.class, () -> {
            statistics.calculateAverage(emptyList);
        });
    }

    @Test
    public void testCalculateAverageWithNullList() {
        Statistics statistics = new Statistics();
        assertThrows(IllegalArgumentException.class, () -> {
            statistics.calculateAverage(null);
        });
    }


}
