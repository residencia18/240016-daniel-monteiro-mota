package com.example.atividades.atividade14;

import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;
import org.mockito.Mock;
import org.mockito.MockitoAnnotations;

import static org.mockito.Mockito.verify;

class EventHandlerTest {

    @Mock
    private EmailService emailService;
    private EventHandler eventHandler;

    @BeforeEach
    public void setUp() {
        MockitoAnnotations.initMocks(this);
        eventHandler = new EventHandler(emailService);
    }

    @Test
    public void testHandleEvent() {
        String event = "Some event";
        eventHandler.handleEvent(event);

        // Verifica se o método sendEmail foi chamado com os parâmetros corretos
        verify(emailService).sendEmail("test@example.com", "Event Occurred", event);
    }

}
