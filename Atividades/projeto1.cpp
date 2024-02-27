#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    char numero = '0';

    for(int i = 0; i < 10; i++)
    {
    cout << numero << " - " << (int)numero++ <<endl;
    } 
    return 0;
}
