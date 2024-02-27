#region 4 Operadores Aritmeticos

Console.WriteLine("4 Operadores Aritmeticos:");
int x = 10;
int y = 3;
int soma,subtracao,multiplicacao,divisao;

soma = x+y;
subtracao = x-y;
multiplicacao = x*y;
divisao = x/y;
Console.WriteLine("x = "+ x);
Console.WriteLine("y = "+ y);
Console.WriteLine("Soma = "+ soma);
Console.WriteLine("Subtração = "+ subtracao);
Console.WriteLine("Multiplicação = "+ multiplicacao);
Console.WriteLine("Divisão = "+ divisao);

#endregion
Console.WriteLine("\n");

#region 5 Operadores de Comparação
Console.WriteLine("5 Operadores de Comparação:");

int a = 5;
int b = 8;
Console.WriteLine("a = "+ a);
Console.WriteLine("b = "+ b);

if(a > b)
{
    Console.WriteLine("A é maior que B");
}
else
{
    Console.WriteLine("B é maior que A");
}

#endregion
Console.WriteLine("\n");

#region 6 Operadores de Igualdade
Console.WriteLine("6 Operadores de Igualdade:");

string str1 = "Hello";
string str2 = "World";

Console.WriteLine(str1);
Console.WriteLine(str2);

if(str1.Equals(str2))
{
    Console.WriteLine("As Strings são iguais!");
}
else
{
    Console.WriteLine("As Strings não são iguais!");
}

#endregion
Console.WriteLine("\n");

#region 7 Operadores Lógicos
Console.WriteLine("7 Operadores Lógicos:");

bool condicao1 = true;
bool condicao2 = false;

if(condicao1.Equals(condicao2))
{
   Console.WriteLine("As condições são verdadeiras!");
}
else 
{
   Console.WriteLine("As condições não são verdadeiras!");
}


#endregion
Console.WriteLine("\n");

#region 8 Desafio de Mistura de Operadores
Console.WriteLine("8 Desafio de Mistura de Operadores:");

int num1 = 7;
int num2 = 3;
int num3 = 10;

Console.WriteLine("Numeros: "+ num1 + ", " + num2 + ", " + num3 );

if((num1 > num2) & (num3 == (num1 + num2)))
{
  Console.WriteLine(num1 + " é maior que "+ num2);
  Console.WriteLine(num3 + " é igual a soma de "+ num1 + " + "+ num2);
}

#endregion