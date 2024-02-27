#include <iostream> 
#include <stdio.h>
#include <cmath>
#include <stdlib.h>
#include <iomanip>
using namespace std;


int main() 
{
    unsigned char informacaoGenetica;

    // Peça ao usuário para inserir a informação genética da planta
    cout << "Digite a informacao genetica da planta (um numero entre 0 e 255): ";
    cin >> informacaoGenetica;

    // Variável para contar quantos genes estão presentes
    int genesPresentes = 0;

    // Use operadores bit a bit para verificar quantos genes estão presentes
    for (int i = 0; i < 8; ++i) 
    {
        if (informacaoGenetica & (1 << i)) 
        {
            genesPresentes++; 
        }
    }

    // Exiba a quantidade de genes presentes
    cout << "Quantidade de genes presentes: " << genesPresentes << endl;

    // Solicite ao usuário para inserir o número do gene específico que deseja verificar
    int geneEspecifico;
    cout << "Digite o numero do gene que deseja verificar (entre 1 e 8): ";
    cin >> geneEspecifico;

    // Verifique se o gene específico está presente usando operadores bit a bit
    bool geneEstaPresente = (informacaoGenetica & (1 << (geneEspecifico - 1))) != 0;

    if (geneEstaPresente) 
    {
      cout << "O gene " << geneEspecifico << " esta presente nesta planta." << std::endl;
    } 
    else 
    {
      cout << "O gene " << geneEspecifico << " nao esta presente nesta planta." << std::endl;
    }

    return 0;
}
