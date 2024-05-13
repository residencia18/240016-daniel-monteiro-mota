package com.daniel.cadastro.dto;

import com.daniel.cadastro.model.UsuarioRole;

public record RegistroDTO(String login, String senha, UsuarioRole role) {
}
