package com.daniel.cadastro.controller;

import com.daniel.cadastro.dto.AutenticacaoDTO;
import com.daniel.cadastro.dto.LoginResponseDTO;
import com.daniel.cadastro.dto.RegistroDTO;
import com.daniel.cadastro.service.EmailService;
import com.daniel.cadastro.service.TokenService;
import com.daniel.cadastro.repositorio.UsuariosRepositorio;
import com.daniel.cadastro.model.Usuarios;
import jakarta.validation.Valid;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.ResponseEntity;
import org.springframework.security.authentication.AuthenticationManager;
import org.springframework.security.authentication.UsernamePasswordAuthenticationToken;
import org.springframework.security.crypto.bcrypt.BCryptPasswordEncoder;
import org.springframework.web.bind.annotation.*;

@RestController
@RequestMapping("auth")
public class AutenticacaoController {

    @Autowired
    private AuthenticationManager authenticationManager;

    @Autowired
    private UsuariosRepositorio usuariosRepositorio;

    @Autowired
    private TokenService tokenService;

    @Autowired
    private EmailService emailService;

    @PostMapping("/login")
    public ResponseEntity login(@RequestBody @Valid AutenticacaoDTO data){

        var usuarioLoginSenha = new UsernamePasswordAuthenticationToken(data.login(), data.senha());

        var auth = this.authenticationManager.authenticate(usuarioLoginSenha);

        var token = tokenService.geradorToken((Usuarios) auth.getPrincipal());

        return ResponseEntity.ok(new LoginResponseDTO(token));
    }

    @PostMapping("/registro")
    public ResponseEntity registro(@RequestBody @Valid RegistroDTO data){

        if(this.usuariosRepositorio.findByLogin(data.login()) != null) return ResponseEntity.badRequest().build();

        String senhaCriptografada = new BCryptPasswordEncoder().encode(data.senha());

        Usuarios novoUsuario = new Usuarios(data.login(),senhaCriptografada,data.role());

        this.usuariosRepositorio.save(novoUsuario);

        emailService.enviarEmail(data.login(),"Registro de Usuario","Usuario registrado com sucesso! Seja bem vindo");

        return ResponseEntity.ok().build();

    }

}
