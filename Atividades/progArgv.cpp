#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main(int argc, char* argv[])
{

//Manipulando entrada pelo argv
//Utilizando a função atoi da biblioteca <stdlib.h> para converter a entrada
//do tipo string em inteiro para fazer a subtração do ano 2023 e mostrar a idade

cout << "Bom dia, " << argv[1] << " sua idade é " << 2023 - atoi(argv[2])  << endl;


return(0);

}