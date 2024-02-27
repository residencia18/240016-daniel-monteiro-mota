/*Os caracteres numéricos aparecem na tabela ASCII, e em outras, numa
sequência que começa pelo caractere ‘0’ até o caractere ‘9’. As variáveis
de tipo caractere podem ser tratadas também como valores numéricos. Com
base nestas afirmações desenvolva um programa em C++ que:

a. Imprima na tela, utilizando cout, cada um dos caracteres numéricos e
seu correspondente código numérico. Como modificar o comportamento
do cout para imprimir um objeto de tipo char como caractere e como
número?
Exemplo: ‘0’ - 48
         ‘1’ - 49
             …
         ‘9’ - 57
Atividades
b. Modifique o exercício anterior para que a saída imprima também o código
numérico em octal e em hexadecimal.

c. Acrescente ao código do exercício anterior a possibilidade de ler um
caractere qualquer e imprima no mesmo formato do inciso anterior.
d. Pesquise como fazer para armazenar uma variável os caracteres
especiais ‘ç’ e ‘ã’. Acrescente no código do exercício anterior um
exemplo que demonstra como usar este recurso.*/
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(void)
{

    char caracter;

    // Solucionando a questão "A e B" da atividade.
    for (int n = 48; n <= 57; n++)
    {
        caracter = n;

        cout << " O valor de " << caracter << " em decimal: " << dec << int(caracter) << endl;

        cout << "O valor de  " << caracter << " em octal: " << oct << int(caracter) << endl;

        cout << " O valor de " << caracter << " em hexa " << hex << int(caracter) << endl;

        cout << endl;
    }

    // Solucionando a questão "C" da atividade.
    cout << "###################### Inserindo um valor #######################" << endl;

    cout << "Insira um caracter: " << endl;
    cin >> caracter;

    cout << " O valor de " << caracter << " em decimal: " << dec << int(caracter) << endl;

    cout << "O valor de  " << caracter << " em octal: " << oct << int(caracter) << endl;

    cout << " O valor de " << caracter << " em hexa: " << hex << int(caracter) << endl;

    cout << endl;

    // Solucionando a questão "D" da atividade.

    // Utilizamos a variável do wchar_t para armazenar caracteres unicode
    // Podendo adicionar "ç" ou "ã" como pede a questão
    wchar_t caracterEspecial = L'ç';

    return (0);
}
