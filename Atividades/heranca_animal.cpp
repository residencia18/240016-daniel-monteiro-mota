#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <math.h>
using namespace std;
#include <cctype>

class Animal
{
    public:
    Animal(string nome,int idade):nome(nome),idade(idade){}

    void fazerSom()
    {
    cout<<"QUALQUER SOM"<<endl;
    }

    public:
    string nome;
    int idade;
    
  
};

class Cachorro: public Animal
{ 
  public:
  Cachorro(string nome, int idade):Animal(nome,idade){}  
  void fazerSom()
  {
    cout<<"LATIDO"<<endl;
  }
};


int main()
{
     Animal animal("Bicho",4);
     Cachorro cachorro("Jack",2);
    
     cout<<"Animal: "<<animal.nome<<" "<<animal.idade<<" anos. "<<"Som: ";
     animal.fazerSom();
     cout<<"Cachorro: "<<cachorro.nome<<" "<<cachorro.idade<<" anos. "<<"Som: ";
     cachorro.fazerSom();

    return 0;
}
