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

    // Calcula o caractere que antecede ch1 e atribua a ch3
    ch3 = static_cast<char>(ch1 - 1);

    // Imprima o valor de ch3 em formatos decimal, octal, hexadecimal e como caractere
    cout << "O caractere anterior a " << ch1 << " e: " << ch3 << endl;
    cout << "Em formato decimal: " << static_cast<int>(ch3) << endl;
    cout << "Em formato octal: " << oct << static_cast<int>(ch3) << endl;
    cout << "Em formato hexadecimal: " << hex << static_cast<int>(ch3) << endl;

    // Verifica se ch3 é imprimível
    if (isprint(ch3)) {
        cout << "Como caractere: " << ch3 << endl;
    } else {
        cout << "Como caractere: _ (caractere nao imprimivel)" << endl;
    }

    return 0;
}
