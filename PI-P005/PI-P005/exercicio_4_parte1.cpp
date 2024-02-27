#include <iostream> 
#include <stdio.h>
#include <cmath>
#include <stdlib.h> 
#include <iomanip>
using namespace std;

int main() 
{
    double x, y, z;
    
    // Peça ao usuário para digitar as coordenadas (x, y)
    cout << "Digite a coordenada x: ";
    cin >> x;
    
    cout << "Digite a coordenada y: ";
    cin >> y;
    
    // Calcule o valor da função f(x) = 5x + 2
    double fx = 5 * x + 2;
    
    // Compare a coordenada y com o valor de f(x)
    if (y > fx) 
    {
        cout << "A coordenada (" << x << ", " << y << ") esta acima da curva." << endl;
    } 
    else if (y < fx) 
    {
        cout << "A coordenada (" << x << ", " << y << ") esta abaixo da curva." << endl;
    } 
    else 
    {
        cout << "A coordenada (" << x << ", " << y << ") esta sobre a curva." << endl;
    }
    
    z = sqrt(pow(x,2)+pow(y,2)); //Raiz quadrada das coordenadas X e Y
    cout<<"O valor da distancia euclidiana do ponto (x, y) ao centro das coordenadas e: "<<z<<endl;

    z = x * y;
    cout<<scientific; //Saida configurada para notação cientifica
    cout<<"O produto de X e Y em notacao cientifica e: "<<z;

    return 0;
}
