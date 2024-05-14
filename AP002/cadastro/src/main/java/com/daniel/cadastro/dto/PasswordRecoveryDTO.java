package com.daniel.cadastro.dto;

public record PasswordRecoveryDTO(String email,String token,String senha)
{
    String findByToken(String token) {
        return token;
    }
}
