package com.daniel.cadastro.controller;

import com.daniel.cadastro.dto.PasswordRecoveryDTO;
import com.daniel.cadastro.dto.UsuariosDTO;
import com.daniel.cadastro.model.Token;
import com.daniel.cadastro.model.Usuarios;
import com.daniel.cadastro.repositorio.TokenRepository;
import com.daniel.cadastro.repositorio.UsuariosRepositorio;
import com.daniel.cadastro.service.EmailService;
import com.daniel.cadastro.service.TokenService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.mail.javamail.JavaMailSender;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.RestController;

import java.util.Optional;

@RestController
public class PasswordRecoveryController {

    @Autowired
    private EmailService emailService;

    @Autowired
    private TokenService tokenService;

    @Autowired
    private JavaMailSender javaMailSender;

    @Autowired
    private UsuariosRepositorio usuariosRepositorio;

    @Autowired
    private TokenRepository tokenRepository;


   @PostMapping("/recoverypassword")
   public String sendEmail(@RequestBody UsuariosDTO data){
       Optional<Usuarios> usuariosOptional = usuariosRepositorio.findByEmail(data.email());

   if(usuariosOptional == null)
   {
       return "Usuario não existe";
   }

   String token = tokenService.geradorToken(usuariosOptional.get());

   tokenRepository.save(new Token(usuariosOptional.get(),token));

   String retorno = emailService.enviarEmail("daniel_ios90@hotmail.com","Link para Recuperação de senha: localhost:8080/changepassword",token);

       return "Token enviado para o email";
   }

   @PostMapping("/changepassword")
  public String resetPassword(@RequestBody String token, String novaSenha){

       Optional<Token> usuario = usuariosRepositorio.findByToken(token);
       Optional<Usuarios> usuariosOptional = Optional.empty();

       if(usuario == null){
           return "Token inválido";
       }
       usuariosRepositorio.save(usuariosOptional.get());

       return "Senha alterada com sucesso!";
   }

}
