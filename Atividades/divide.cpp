#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
using namespace std;

int main(int argc, char* argv[])
{


string name = argv[1];
int x = atoi(argv[2]);
int y = atoi(argv[3]);
double xd = atof(argv[2]);
double yd = atof(argv[3]);

if(name == "\int")
{
cout << "O valor da divisão é: " << x / y << endl;

}

if(name == "\double")
{
cout << "O valor da divisão é: " << xd / yd << endl;

}

return(0);


}


