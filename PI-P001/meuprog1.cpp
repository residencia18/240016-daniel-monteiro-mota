#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <locale.h>
using namespace std;

int main(void)
{
  setlocale(LC_ALL,"");

  string nome_do_usuario;

  cout <<"Informe seu nome ção: ";

  cin>>nome_do_usuario;  

  cout <<"Bom dia "<<nome_do_usuario;
    return 0;
}
