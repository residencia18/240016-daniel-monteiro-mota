#include <iostream>
#include <cstdio>
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


int main() {
    int num1, num2;

    // Solicita ao usuário que forneça dois números inteiros
    cout << "Digite o primeiro numero inteiro: ";
    cin >> num1;

    cout << "Digite o segundo numero inteiro: ";
    cin >> num2;

    // Usa o operador condicional para determinar o maior número e imprimir a mensagem 
    (num1 > num2) ? cout << num1 << " eh maior" : ((num2 > num1) ? cout << num2 << " eh maior" : cout << "Estes numeros sao iguais");

    // Verificação do maior valor se é par ou ímpar
    if (num1 > num2) {
        if (num1 % 2 == 0) {
            cout << " e par." << endl;
        } else {
            cout << " e ímpar." << endl;
        }
    } else if (num2 > num1) {
        if (num2 % 2 == 0) {
            cout << " e par." << endl;
        } else {
            cout << " e impar." << endl;
        }
    } else {
        cout << "." << endl; // Números iguais, não é preciso verificar par ou ímpar
    }

    return 0;
}
