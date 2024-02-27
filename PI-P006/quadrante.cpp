#include <iostream>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main() 
{
    double x, y;

    // Solicita ao usuário que digite as coordenadas do ponto
    cout << "Digite o valor de x: ";
    cin >> x;

    cout << "Digite o valor de y: ";
    cin >> y;

    // Usa o operador condicional para determinar o quadrante
    string quadrante =
        (x > 0 && y > 0) ? "primeiro quadrante" :
        (x < 0 && y > 0) ? "segundo quadrante" :
        (x < 0 && y < 0) ? "terceiro quadrante" :
        (x > 0 && y < 0) ? "quarto quadrante" :
        (x == 0 || y == 0) ? "sobre um dos eixos" :
        "ponto indefinido";

    // Imprime o resultado
    cout << "O ponto (" << x << ", " << y << ") esta no " << quadrante << "." << endl;

return 0;

}
