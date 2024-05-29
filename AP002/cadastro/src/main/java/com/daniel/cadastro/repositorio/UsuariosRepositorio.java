package com.daniel.cadastro.repositorio;

import com.daniel.cadastro.model.Token;
import com.daniel.cadastro.model.Usuarios;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.security.core.userdetails.UserDetails;

import java.util.Optional;

public interface UsuariosRepositorio extends JpaRepository<Usuarios, Long> {

    //Metodo para busca via login
    UserDetails findByLogin(String login);

    Optional<Usuarios> findByEmail(String email);


    Optional<Token> findByToken(String token);
}
