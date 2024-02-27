#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <math.h>
using namespace std;
#include <cctype>

class Senha 
{
public:
    static bool ValidadorSenha(const string& senha) 
    {
        // Verifica se a senha tem pelo menos 8 caracteres
        if (senha.length() < 8) 
        {
            return false;
        }

        bool temLetraMinuscula = false;
        bool temLetraMaiuscula = false;
        bool temNumero = false;
        bool temCaractereEspecial = false;

        for (char c : senha) 
        {
            if (islower(c)) 
            {
                temLetraMinuscula = true;
            } else if (isupper(c)) 
            {
                temLetraMaiuscula = true;
            } else if (isdigit(c)) 
            {
                temNumero = true;
            } 
            else 
            {
                // Você pode adicionar mais caracteres especiais conforme necessário
                if (c == '!' || c == '@' || c == '#' || c == '$' || c == '%') 
                {
                    temCaractereEspecial = true;
                }
            }
        }

        // A senha deve atender a todos os critérios
        return temLetraMinuscula && temLetraMaiuscula && temNumero && temCaractereEspecial;
    }
};

int main() {
    string senha;
    cout << "Digite a senha: ";
    cin >> senha;

    if (Senha::ValidadorSenha(senha)) 
    {
        cout << "Senha válida!" <<endl;
    } 
    else 
    {
        cout << "Senha inválida!" <<endl;
    }

    return 0;
}
