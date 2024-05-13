package com.daniel.cadastro.service;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.mail.MailException;
import org.springframework.mail.SimpleMailMessage;
import org.springframework.mail.javamail.JavaMailSender;
import org.springframework.stereotype.Service;

@Service
public class EmailService {

    @Autowired
    private JavaMailSender javaMailSender;

    @Value("${spring.mail.username}")
    private String remetente;

    public String enviarEmail(String destinatario, String assunto, String mensagem) {

       try {
           SimpleMailMessage simpleMailMessage = new SimpleMailMessage();
           simpleMailMessage.setFrom(remetente);
           simpleMailMessage.setTo(destinatario);
           simpleMailMessage.setSubject(assunto);
           simpleMailMessage.setText(mensagem);
           javaMailSender.send(simpleMailMessage);
           return "Email enviado com sucesso!";
       } catch (MailException e) {
          return "Erro ao tentar enviar email"+ e.getLocalizedMessage();
       }
    }

    public void sendPasswordResetLink(String username, String token) {
    }

}
