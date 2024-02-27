#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <vector>
#include <iostream>
using namespace std;

// Definindo a interface Desenhavel
class Desenhavel {
public:
    virtual void desenhar() = 0; // Método puro virtual
};

// Implementando a classe Circulo
class Circulo : public Desenhavel {
public:
    void desenhar() override {
        cout << "Desenhando um círculo." << endl;
        cout<<" ********"<<endl;
        cout<<"***********"<<endl;
        cout<<"***********"<<endl;
        cout<<" ********"<<endl;
        cout<<endl;
    }
};

// Implementando a classe Retangulo
class Retangulo : public Desenhavel {
public:
    void desenhar() override {
        cout << "Desenhando um retângulo." << endl;
        cout<<"***************"<<endl;
        cout<<"***************"<<endl;
        cout<<"***************"<<endl;
        cout<<"***************"<<endl;
        cout<<endl;
    }
};

// Implementando a classe Triangulo
class Triangulo : public Desenhavel {
public:
    void desenhar() override {
        cout << "Desenhando um triângulo." << endl;
        cout<<"      * "<<endl;
        cout<<"     *** "<<endl;
        cout<<"    ***** "<<endl;
        cout<<"   ******* "<<endl;
        cout<<" ***********"<<endl;
        cout<<"**************"<<endl;

    }
};

int main() {
    Circulo circulo;
    Retangulo retangulo;
    Triangulo triangulo;

    // Usando polimorfismo para chamar o método desenhar em diferentes objetos
    Desenhavel* formas[] = {&circulo, &retangulo, &triangulo};

    for (int i = 0; i < 3; i++) {
        formas[i]->desenhar();
    }

    return 0;
}
