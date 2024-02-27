/*
Durante a aula foram apresentados o tipo de dados double e suas
variações, que permitem representar um subconjunto dos números reais.
Sobre estes tipos de dados crie uma aplicação que:
a. Sobre o tipo float identifique qual o menor e o maior valor que pode
ser representado por uma variável deste tipo. Mostre esta informação na
tela.

b. Crie uma variável pif de tipo float e atribua a ela o valor da
constante pi com o maior número de casas decimais que você consiga
achar na Internet. Imprima este valor na tela.

c. Explore as formas de formatar a saída com o comando cout e
modifique a quantidade de casas decimais que são apresentadas, na
impressão do valor de pi, para 2, 4, 8 e 16.

d. Crie uma variável pid de tipo double e atribua a ela o valor da
constante pi com o maior número de casas decimais que você consiga
achar na Internet. Imprima este valor na tela.

e. Identifique se existe alguma diferença entre o valor pif e pid quando
seus valores são impressos com cout utilizando 2, 4, 8 e 16 casas decimais

f. No seu sistema existe diferença entre o tipo double e long double?
Mostre seu achado com algum exemplo dentro do seu código.

*/

#include <iostream>
#include <string>
#include <math.h>
#include <iomanip>


//O #include <limits> incluir funcionalidade para obter, 
//o mínimo e máximo de um tipo de variável 
#include <limits>

using namespace std;


int main(void)
{

// Declarando a variável "pif" do tipo float
float pif = 3.14159265358979323846;


//Imprimindo na tela o mínimo e o máximo de um tipo float.
cout << "Minimum value for float: " << numeric_limits<float>::min() << endl;
cout << "Maximum value for float: " << numeric_limits<float>::max() << endl; 


//Imprimindo valor da variável pif na tela.

cout << "Valor de pi: " << pif << endl;

// Imprimindo o valor da variável pif com 2, 4, 8 e 16 casas decimais.
cout << "Valor de pi duas casas decimais:" << setprecision (2) << pif << endl;
cout << "Valor de pi quatro casas decimais:" << setprecision (4) << pif << endl;
cout << "Valor de pi oito casas decimais:" << setprecision (8) << pif << endl;
cout << "Valor de pi dezesseis casas decimais:" << setprecision (16) << pif << endl;
cout<< endl;
cout<< endl;

cout << "################### Trabalhando com double.################" << endl;
cout<< endl;
// Declarando a variável pid do tipo double.
double pid = 3.14159265358979323846;

//Imprimindo na tela o valor da variável pid.
cout << "Valor de pi em double: " << pid << endl;



//Imprimindo valores da variável pid com 2, 4 ,8 e 16 casas decimais,
// para identificando se existe diferença iem comparação com a variável pif.

cout << "Valor de pi duas casas decimais:" << setprecision (2) << pid << endl;
cout << "Valor de pi quatro casas decimais:" << setprecision (4) << pid << endl;
cout << "Valor de pi oito casas decimais:" << setprecision (8) << pid << endl;
cout << "Valor de pi dezesseis casas decimais:" << setprecision (16) << pid << endl;
cout<< endl;
cout<< endl;

cout << "#################### Trabalhando com long double##################";
cout<< endl;
cout<< endl;
long double pid2 = 3.14159265358979323846;

//Imprimindo na tela o valor da variável pid2.
cout << "Valor de pi em long double: " << pid2 << endl;
cout<< endl;
cout << "Valor de pi duas casas decimais:" << setprecision (2) << pid2 << endl;
cout << "Valor de pi quatro casas decimais:" << setprecision (4) << pid2 << endl;
cout << "Valor de pi oito casas decimais:" << setprecision (8) << pid2 << endl;
cout << "Valor de pi dezesseis casas decimais:" << setprecision (16) << pid2 << endl;
cout<< endl;

return(0);

}