#include <iostream>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
    char ch1, ch2, ch3;

    // Solicita ao usuário que digite dois caracteres
     cout << "Digite o primeiro caractere: ";
     cin >> ch1;
    
     cout << "Digite o segundo caractere: ";
     cin >> ch2;

    // Calcula o caractere que precede ch2 e atribui a ch3
     ch3 = ch2 - 1;

    // Imprime o caractere em formato decimal, octal, hexadecimal e como caractere
    printf("O caractere anterior a %c e: %c\n", ch2, ch3);
    printf("Em formato decimal: %d\n", ch3);
    printf("Em formato octal: %o\n", ch3);
    printf("Em formato hexadecimal: %x\n", ch3);

    // Verifica se ch3 é imprimível
    if (isprint(ch3)) {
        printf("Como caractere: %c\n", ch3);
    } else {
        printf("Como caractere: _ (caractere nao imprimivel)\n");
    }

    return 0;
}
