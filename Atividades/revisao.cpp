#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
     int i = 1;
     int nota = 0,soma = 0,media;

    while(i  <= 10)
    {
        cout<<"Informe a nota: "<<endl;
        cin>>nota;
        soma = soma + nota;
        i++;
    }
    cout<<"Media das notas dos alunos: "<<(media = soma/10)<<endl;

    return 0;
}
