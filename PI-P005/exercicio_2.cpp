#include <iostream> 
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    char ch1, ch2, ch3;

    // Peça ao usuário para digitar um caractere e atribua a ch1
    cout << "Digite um caractere: ";
    cin >> ch1;

    // Verifique o tipo de caractere usando operador condicional
    char tipo = (ch1 >= 'A' && ch1 <= 'Z') ? 'A' : 
                (ch1 >= 'a' && ch1 <= 'z') ? 'a' :
                (ch1 >= '0' && ch1 <= '9') ? '0' : 'x';

    switch (tipo) 
    {
        case 'A':
            cout << "É uma letra maiúscula." << endl;
            break;
        case 'a':
            cout << "É uma letra minúscula." << endl;
            break;
        case '0':
            cout << "É um dígito." << endl;
            break;
        default:
            cout << "É outro tipo de caractere." << endl;
            break;
    }

    // Atribua à ch2 o caractere 81 e imprima em diferentes formatos
    ch2 = 81;
    cout << "ch2 em formato decimal: " << static_cast<int>(ch2) << endl;
    cout << "ch2 em formato octal: " << oct << static_cast<int>(ch2) << endl;
    cout << "ch2 em formato hexadecimal: " << hex << static_cast<int>(ch2) << endl;
    cout << "ch2 como caractere: " << ch2 << endl;

    // Converta a letra maiúscula para minúscula (maneira alternativa à tabela ASCII)
    ch3 = ch1 + 32;
    cout << "ch3 em formato decimal: " << static_cast<int>(ch3) << endl;
    cout << "ch3 em formato octal: " << oct << static_cast<int>(ch3) << endl;
    cout << "ch3 em formato hexadecimal: " << hex << static_cast<int>(ch3) << endl;
    cout << "ch3 como caractere: " << ch3 << endl;

    return 0;
}
