#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
     const float pif = 3.141592653589793238462643383279502884197169;
     cout<<"Maximo de casas decimais "<<pif<<__FLT_RADIX__<<endl;
     const float pid = 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348;
     cout<<"Maximo de casas decimais "<<pid<<__FLT_MAX__<<endl;


     float num;
     cout<<"Maior numero possivel "<<num<<__FLT_MAX__<<endl;
     cout<<"Menor numero possivel "<<num<<__FLT_MIN__<<endl;

    return 0;
}
