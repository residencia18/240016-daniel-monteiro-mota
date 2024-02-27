#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    int nota;

    cout<<"Informe a nota: ";
    cin>>nota;

     if(nota >= 0 && nota <= 10)
     {
        if(nota >= 9)
        {
            cout<<"Conceito A"<<endl;
        }
        else if(nota >= 7)
        {
            cout<<"Conceito B"<<endl;
        }
        else if(nota >= 5)
        {
            cout<<"Conceito C"<<endl;
        }
        else if(nota >= 3)
        {
            cout<<"Conceito D"<<endl;
        }
        else
        {
            cout<<"Conceito F"<<endl;
        }
     }


    return 0;
}
