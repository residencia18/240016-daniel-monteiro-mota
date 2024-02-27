#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
    int a, b, c,valor;

    // Solicite ao usuário que digite dois números inteiros
    std::cout << "Digite o valor de a: ";
    std::cin >> a;
    
    std::cout << "Digite o valor de b: ";
    std::cin >> b;

    // Calcule o valor de c
    c = 4 * (a + b)/(3-5);

    // Calculo do valor apos resultado de C
    valor = (a*a) + 2*b + c;

    // Imprima o resultado na tela
    std::cout << "O valor e igual a: " << valor << std::endl;

    return 0;
}
