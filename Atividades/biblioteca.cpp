#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <math.h>
using namespace std;
#include <cctype>

class ItemBiblioteca
{
 protected:
 string titulo,autor;
 int numeroCopias;

 public:
 ItemBiblioteca(string autor, string titulo, int numeroCopias)
 {
    this->autor = autor;
    this->titulo = titulo;
    this->numeroCopias = numeroCopias;
 }

};

class Livro: public ItemBiblioteca
{
    Livro(string autor, string titulo, int numeroCopias){}

};