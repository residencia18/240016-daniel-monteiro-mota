#include <iostream>
using namespace std;

int main(void)
{

//Exemplo dois da atividade
cout << "############### Exemplo dois da Atividade ###############";
cout << endl; 

char word[] = "Hello";
char name[30];

cout << "Enter your name: ";
cin.getline(name, 30);
cout << word << ", " << name << endl;



return(0);


}