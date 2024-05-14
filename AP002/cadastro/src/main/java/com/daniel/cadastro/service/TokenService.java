package com.daniel.cadastro.service;

import com.auth0.jwt.JWT;
import com.auth0.jwt.algorithms.Algorithm;
import com.auth0.jwt.exceptions.JWTCreationException;
import com.auth0.jwt.exceptions.JWTVerificationException;
import com.daniel.cadastro.model.Usuarios;
import jakarta.persistence.CascadeType;
import jakarta.persistence.JoinColumn;
import jakarta.persistence.OneToOne;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.stereotype.Service;
import java.time.Instant;
import java.time.LocalDateTime;
import java.time.ZoneOffset;
import java.util.HashMap;
import java.util.Map;
import java.util.UUID;

@Service
public class TokenService {

    @Value("${api.security.token.secret}")
    private String secret;
    private Map<String, String> tokenMap;
    public TokenService() {
        this.tokenMap = new HashMap<>();
    }

    //Metodo para geração do TOKEN
    public String geradorToken(Usuarios usuarios){

        try {
            Algorithm algoritimo = Algorithm.HMAC256(secret);
            String token = JWT.create()
                    .withIssuer("auth-api")
                    .withSubject(usuarios.getLogin())
                    .withExpiresAt(dataExpiracao())
                    .sign(algoritimo);
            return token;

        } catch (JWTCreationException exception) {
            throw new RuntimeException("Erro na geração de TOKEN",exception);
        }
    }

    //Metodo do tempo de expiração do TOKEN
    private Instant dataExpiracao(){

        return LocalDateTime.now().plusDays(1).toInstant(ZoneOffset.of("-03:00"));
    }

    //Metodo para validação do TOKEN
    public String validaToken(String token){
        try {
            Algorithm algoritimo = Algorithm.HMAC256(secret);
           return JWT.require(algoritimo)
                   .withIssuer("auth-api")
                   .build()
                   .verify(token)
                   .getSubject();

        } catch (JWTVerificationException exception) {
           return "";
        }
    }

    public String geradorToken(String username) {
        return username;
    }

    public void invalidateToken(String token) {
        tokenMap.remove(token);
    }

    public String getEmailByToken(String token) {
        return tokenMap.get(token);
    }

    public String generateToken(String userEmail) {
        String token = UUID.randomUUID().toString();
        tokenMap.put(token, userEmail);
        return token;
    }
}
