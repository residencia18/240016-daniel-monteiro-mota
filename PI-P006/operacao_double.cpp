#include <iostream>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main() {
    double x, y, z;

    // Solicita ao usuário que digite dois números 
    cout << "Digite o primeiro numero: ";
    cin >> x;

    cout << "Digite o segundo numero: ";
    cin >> y;

    // Soma de x e y
    z = x + y;
    cout << "Soma de x e y: " << z << endl;

    // Média de x e y
    z = (x + y) / 2.0;
    cout << "Media de x e y: " << z << endl;

    // Produto de x e y
    z = x * y;
    cout << "Produto de x e y: " << z << endl;

    // Maior valor entre x e y
    z = (x > y) ? x : y;
    cout << "Maior valor entre x e y: " << z << endl;

    // Menor valor entre x e y
    z = (x < y) ? x : y;
    cout << "Menor valor entre x e y: " << z << endl;

    return 0;
}
