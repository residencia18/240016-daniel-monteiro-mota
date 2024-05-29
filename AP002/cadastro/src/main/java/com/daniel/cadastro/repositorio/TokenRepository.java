package com.daniel.cadastro.repositorio;

import com.daniel.cadastro.model.Token;
import org.springframework.data.jpa.repository.JpaRepository;

import java.util.Optional;

public interface TokenRepository extends JpaRepository<Token,Long> {


}
