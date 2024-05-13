package com.daniel.cadastro.repositorio;

import com.daniel.cadastro.model.Usuarios;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.security.core.userdetails.UserDetails;

public interface UsuariosRepositorio extends JpaRepository<Usuarios, Long> {

    //Metodo para busca via login
    UserDetails findByLogin(String login);

}
