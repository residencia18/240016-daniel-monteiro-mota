#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <math.h>
#include <iomanip>
using namespace std;

class ItemBiblioteca
{
public:
string titulo,autor;
int numCopias;
void inserirItem();
void imprimir();

};

void ItemBiblioteca::inserirItem()
{
 cout<<"Informe o titulo: ";
 cin>>titulo;
 cout<<"Informe o nome do autor do livro: ";
 cin>>autor;
 cout<<"Informe o numero de copias do livro: ";
 cin>>numCopias;
}

void ItemBiblioteca::imprimir()
{
 cout<<titulo<<endl<<autor<<endl<<numCopias;
 cout<<"--------------------------------------"<<endl;
}

class Livro:public ItemBiblioteca
{
  public:
  Livro();
};
Livro::Livro()
{
}

class DVD:public ItemBiblioteca
{
  public:
  DVD();
};
DVD::DVD()
{
}

int main()
{
  Livro *livro1 = new Livro();
  DVD *dvd1 = new DVD();

  livro1->inserirItem();
  dvd1->inserirItem();

  livro1->imprimir();
  dvd1->imprimir();
 
  return 0;
}
