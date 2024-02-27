#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <vector>
#include <iostream>
#include <stdint.h>
using namespace std;

template <typename T>
class ListaGenerica {
public:
    void adicionar(const T& elemento) {
        elementos.push_back(elemento);
    }

    void remover(const T& elemento) {
        for (auto it = elementos.begin(); it != elementos.end(); ++it) {
            if (*it == elemento) {
                elementos.erase(it);
                break;
            }
        }
    }

    void listar() {
        for (const T& elemento : elementos) {
            cout << elemento << endl;
        }
    }

private:
    vector<T> elementos;
};

int main() {
    ListaGenerica<int> listaInteiros;
    ListaGenerica<string> listaStrings;
    ListaGenerica<double> listaDoubles;

    int opcao;
    do {
        cout << "Escolha o tipo de dado para adicionar à lista:" << endl;
        cout << "1. Inteiro" << endl;
        cout << "2. String" << endl;
        cout << "3. Número de ponto flutuante" << endl;
        cout << "0. Sair" <<endl;
        cin >> opcao;

        if(opcao == 1) {
                int inteiro;
                cout << "Digite um inteiro: ";
                cin >> inteiro;
                listaInteiros.adicionar(inteiro);
        }
        if(opcao == 2){
                string texto = "";
                cout << "Digite uma string: ";
                cin.ignore();
                getline(cin, texto);
                listaStrings.adicionar(texto);
        }
        if(opcao == 3){
                double numero;
                cout << "Digite um número de ponto flutuante: ";
                cin >> numero;
                listaDoubles.adicionar(numero);
        }
         if(opcao == 0)
         {       
               exit;
         }
        
    } while (opcao != 0);

    cout << "Lista de inteiros:" <<endl;
    listaInteiros.listar();

    cout << "\nLista de strings:" << endl;
    listaStrings.listar();

    cout << "\nLista de números de ponto flutuante:" << endl;
    listaDoubles.listar();

    return 0;
}
