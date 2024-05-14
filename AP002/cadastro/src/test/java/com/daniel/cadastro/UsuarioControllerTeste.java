package com.daniel.cadastro;

import static org.junit.jupiter.api.Assertions.assertEquals;
import static org.mockito.ArgumentMatchers.any;
import static org.mockito.Mockito.when;

import org.junit.jupiter.api.Test;
import org.junit.jupiter.api.extension.ExtendWith;
import org.mockito.InjectMocks;
import org.mockito.Mock;
import org.mockito.junit.jupiter.MockitoExtension;

@ExtendWith(MockitoExtension.class)//anotação para dizer que está usando Mockito
public class UsuarioControllerTeste {

	@InjectMocks
	private UsuarioControllerV1 usuarioController;

	@Mock
	private UsuarioRepositorio usuarioRepositorio;

	@Mock
	private UsuarioServiceV1 usuarioService;

	Usuario usuario = new Usuario(1L, "Daniel","danmont@email.com","102030");
	Usuario usuario1 = new Usuario(2L,"Renata","renata@email.com","456789");
	Usuario usuario2 = new Usuario(3L,"Leonardo","leonardo@email.com","789012");

	@Test
	public void deveListarUsuarios() {

		//configuração teste
		when(usuarioRepositorio.save(any(Usuario.class))).thenReturn(usuario);

		//ação do teste
		Usuario usuarioSalvo = usuarioService.criarUsuario(usuario);
		
		assertEquals(usuarioSalvo.getNome(),usuario.getNome());
		assertEquals(usuarioSalvo.getEmail(),usuario.getEmail());
		assertEquals(usuarioSalvo.getSenha(),usuario.getSenha());

	}



}
