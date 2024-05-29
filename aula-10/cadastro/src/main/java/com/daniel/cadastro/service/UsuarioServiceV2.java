package com.daniel.cadastro.service;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Qualifier;
import org.springframework.lang.NonNull;
import org.springframework.stereotype.Service;

import com.daniel.cadastro.repositorio.UsuarioRepositorio;

@Service
@Qualifier("v2")
public class UsuarioServiceV2 extends UsuarioServiceV1 {

	@Autowired
	private UsuarioRepositorio usuRepo;
	
	  // Deleta todos usuarios
    public void deletaUsuarios() {
    	usuRepo.deleteAll();
    }

    // Deleta um usuario
    public void deleteUsuario(@NonNull Long id) {
    	usuRepo.deleteById(id);
    }
	
	
}
