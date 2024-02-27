#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <vector>
#include <iostream>
using namespace std;

class Estado
{
    public:
    string nome;
    string sigla;

};

class Cidade
{
    public:
    string nome;
    Estado estado;
};



int main()
{
    Estado estado;
    Cidade cidad;
    vector<Estado> est;
    vector<Cidade> cidade;
    int encerra;

    while(encerra != 0)
    {
    cout<<"Digite o nome do estado: ";
    cin>>estado.nome;
    cout<<"Digite a sigla do estado: ";
    cin>>estado.sigla;
    est.push_back(estado);

    cout<<"Digite o nome da cidade: ";
    cin>>cidad.nome;
    cidade.push_back(cidad);

    cout<<"Encerrar? (aperte 0), Continuar (digite qualquer numero)";
    cin>>encerra;

    if(encerra == 0)
    {
        for(const auto &estado: est)
        {
            cout<<"ESTADO: "<<estado.nome<<" "<<estado.sigla<<endl;
        }
        for (const auto &cidad: cidade)
        {
            cout<<"CIDADE: "<<cidad.nome<<" "<<endl;
        }
    }
    }
    
    return 0;
}
