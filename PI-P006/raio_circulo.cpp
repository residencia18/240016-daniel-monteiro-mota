#include <iostream>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main() {
    double raio;

    // Solicita ao usuário que digite o raio do círculo
    cout << "Digite o raio do circulo: ";
    cin >> raio;

    // Calcula o diâmetro, circunferência (perímetro) e área
    double diametro = 2 * raio;
    double circunferencia = 2 * M_PI * raio; // M_PI é uma constante que representa o valor de π
    double area = M_PI * raio * raio;

    // Imprime os resultados
    cout << "Diametro do circulo: " << diametro << endl;
    cout << "Circunferencia do circulo: " << circunferencia << endl;
    cout << "Area do circulo: " << area << endl;

    return 0;
}
