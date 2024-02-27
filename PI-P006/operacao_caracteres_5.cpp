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

     // Usa o operador condicional para atribuir o valor a ch3
     ch3 = (isdigit(ch1) || isdigit(ch2)) ? '1' : ' ';

     // Imprime o valor de ch3
     cout << "O valor de ch3 e: " << ch3 << endl;

     return 0;
}
