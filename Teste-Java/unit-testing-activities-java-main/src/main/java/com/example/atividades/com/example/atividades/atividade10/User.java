package com.example.atividades.atividade10;

public class User {
    private String name;
    private String email;

    public User(int name, String email) {
        this.name = String.valueOf(name);
        this.email = email;
    }

    public String getName() {
        return name;
    }

    public String getEmail() {
        return email;
    }
}

