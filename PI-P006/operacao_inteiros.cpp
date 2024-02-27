#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;

    // Solicite ao usuário que digite dois números inteiros
    std::cout << "Digite o valor de a: ";
    std::cin >> a;
    
    std::cout << "Digite o valor de b: ";
    std::cin >> b;

    // Calcule o valor de c
    c = 4 * a + b / 3 - 5;

    // Imprima o resultado na tela
    std::cout << "O valor de c e: " << c << std::endl;

    return 0;
}
