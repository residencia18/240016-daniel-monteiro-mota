#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <math.h>
using namespace std;


class Forma
{   public:
    Forma(double base,double altura, double raio): base(base),altura(altura),raio(raio){}
    float calculaArea();

    public:
    double base,altura,raio;
};

class Retangulo: public Forma
{   
    public:
    Retangulo(double base,double altura): Forma(base,altura,raio){}
     
    float calculaArea()
    {   
        double area;
        area = base * altura;
        return area;
    }
};

class Circulo: public Forma
{   
    public:
    Circulo(double raio): Forma(base,altura,raio){}
   
    float calculaArea()
    {
        double area;
        area = M_PI * (pow(raio,2));
        return area;
    }
};

int main()
{
    Retangulo ret(5,6);
    Circulo circ(7);

    cout<<"Area do Retangulo: "<<ret.calculaArea()<<endl<<endl;
    cout<<"Area do Circulo: "<<circ.calculaArea()<<endl;
    
    return 0;
}
