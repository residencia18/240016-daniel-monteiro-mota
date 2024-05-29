package com.daniel.cadastro.dto;

import com.daniel.cadastro.model.Token;
import com.daniel.cadastro.model.UsuarioRole;

public record UsuariosDTO(String login, String email, String senha,UsuarioRole role) {
}
