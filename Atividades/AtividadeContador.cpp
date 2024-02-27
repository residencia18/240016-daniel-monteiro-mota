#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    int contador = 1;
    int nota = 0,soma = 0,media;
    
    while (contador <= 10)
    {
      cout<<"Informe a nota do aluno: "<< endl;
      cin>>nota;
      soma = soma + nota;
      contador++;

    }
     cout<<"Media dos alunos no teste: "<<(media = soma/10);

    return 0;
}
