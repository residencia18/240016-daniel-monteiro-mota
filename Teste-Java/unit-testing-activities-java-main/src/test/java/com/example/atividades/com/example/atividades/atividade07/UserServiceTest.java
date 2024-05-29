package com.example.atividades.atividade07;

import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.junit.jupiter.api.Assertions.assertThrows;
import static org.mockito.Mockito.*;

public class UserServiceTest {

    @Test
    public void testSaveUser() {
        // Criando um objeto Database mockado
        Database mockedDatabase = mock(Database.class);

        // Criando um objeto UserService com o Database mockado
        UserService userService = new UserService(mockedDatabase);

        // Criando um objeto User válido
        User validUser = new User("John Doe", "john@example.com");

        // Testando o método saveUser com um usuário válido
        userService.saveUser(validUser);

        // Verificando se o método saveUser do Database mockado foi chamado uma vez com o usuário válido
        verify(mockedDatabase, times(1)).saveUser(validUser);
    }

    @Test
    public void testSaveUserWithInvalidUser() {
        // Criando um objeto Database mockado
        Database mockedDatabase = mock(Database.class);

        // Criando um objeto UserService com o Database mockado
        UserService userService = new UserService(mockedDatabase);

        // Criando um objeto User inválido
        User invalidUser = new User(null, "john@example.com");

        // Testando o método saveUser com um usuário inválido
        IllegalArgumentException exception = assertThrows(IllegalArgumentException.class, () -> {
            userService.saveUser(invalidUser);
        });

        // Verificando a mensagem de exceção
        assertEquals("User must have a name and email", exception.getMessage());

        // Verificando se o método saveUser do Database mockado não foi chamado
        verify(mockedDatabase, never()).saveUser(any());
    }

}
