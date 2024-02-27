#include <iostream> 
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main() 
{
    int a, b, c;

    // Peça ao usuário para digitar dois números inteiros
    cout << "Digite o primeiro numero inteiro (a): ";
    cin >> a;

    cout << "Digite o segundo numero inteiro (b): ";
    cin >> b;

    // Soma das variáveis a e b em formato hexadecimal
    c = a + b;
    cout << "Soma (em hexadecimal): 0x" << hex << c << endl;

    // Produto das variáveis a e b em formato octal
    c = a * b;
    cout << "Produto (em octal): 0" << oct << c << endl;

    // Valor absoluto da diferença entre a e b
    c = (a > b) ? (a - b) : (b - a);
    cout << "Valor absoluto da diferenca: " << c << endl;

    // Quociente entre a e b (com verificação de divisão por zero)
    if (b != 0)
    {
        c = a / b;
        cout << "Quociente: " << c << endl;

        // Verifique se a é divisível por b
        string divisivel = (a % b == 0) ? "a é divisivel por b" : "a nao é divisivel por b";
        cout << divisivel << endl;
    } 
    else
    {
        cout << "A divisao por zero nao é possivel." << endl;
    }

    return 0;
}
