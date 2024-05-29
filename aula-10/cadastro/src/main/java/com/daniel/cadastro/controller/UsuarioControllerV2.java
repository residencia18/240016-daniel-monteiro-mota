package com.daniel.cadastro.controller;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.lang.NonNull;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.daniel.cadastro.service.UsuarioServiceV2;


@RestController
@RequestMapping(value = "/v2/usuarios")
public class UsuarioControllerV2 {

	@Autowired
	private UsuarioServiceV2 usuService2;
	
	// Deleta todos usuarios
	@DeleteMapping
	public String deletaUsuarios() {
		usuService2.deletaUsuarios();
		return "Usuarios excluidos com sucesso!";
	}

	// Deleta usuario pelo ID
	@DeleteMapping("/{id}")
	public void deleteUsuario(@PathVariable @NonNull Long id) {
		usuService2.deleteUsuario(id);
	}
	
}
