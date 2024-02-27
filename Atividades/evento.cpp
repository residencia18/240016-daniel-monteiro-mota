#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <vector>
using namespace std;

class Evento
{
    private:
    int duracao;

    public:
    Evento(int d)
    {
        duracao = d;
    }

   int getDuracao() 
   {
	return this->duracao;
   }
   void setDuracao(int duracao) 
   {
	this->duracao = duracao;
   }
};

class Pacote
{
    private:
    string nome;
    vector<Evento> eventos;

    public:
    Pacote(string n)
    {
        nome = n;
    }

    void adicionarEvento(Evento evento)
    {
        eventos.push_back(evento);
    }
    
    void listaEventos()
    {
        cout<<"Eventos de "<<nome<<endl;

        for(Evento e: eventos)
        {
            cout<<e.getDuracao()<<endl;
        }
    }
};


int main()
{

    Pacote p1("Pacote 1");
    Pacote p2("Pacote 2");

    Evento ev1(1);
    Evento ev2(2);
    Evento ev3(3);
    Evento ev4(4);

    p1.adicionarEvento(ev1);
    p1.adicionarEvento(ev2);
    p2.adicionarEvento(ev2);
    p2.adicionarEvento(ev3);

    p1.listaEventos();
    p2.listaEventos();

    ev2.setDuracao(10);

    p1.listaEventos();
    p2.listaEventos();

    return 0;
}
