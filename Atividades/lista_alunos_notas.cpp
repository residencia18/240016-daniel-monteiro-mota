#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <math.h>
using namespace std;
#include <cctype>
#include <fstream>
#include <vector>

class Alunos
{
public:
string nome,email;
double nota1,nota2;  

Alunos(string nome, string email, double nota1, double nota2)
{
    this->nome = nome;
    this->email = email;
    this->nota1 = nota1;
    this->nota2 = nota2;

}
    //getters
    string getNome()
    {
        return nome;
    }
    string getEmail()
    {
        return email;
    }
    double getNota1()
    {
        return nota1;
    }
    double getNota2()
    {
        return nota2;
    }
    //setters
    void setNome(string nomeAluno)
    {
        nome = nomeAluno;
    }
    void setEmail(string emailAluno)
    {
        email = emailAluno;
    }
    void setNota1(double n1)
    {
        nota1 = n1;
    }
    void setNota2(double n2)
    {
        nota2 = n2;
    }
    
};

int main()
{    
    string nome_aluno,e_mail;
    double nota_1,nota_2; 

    Alunos aluno(nome_aluno,e_mail,nota_1,nota_2);
    
    cout<<"Digite o nome do aluno: ";
     cin>>aluno.nome;
     cout<<"Informe o email do aluno: ";
     cin>>aluno.email;
     cout<<"Primeira nota: ";
     cin>>aluno.nota1;
     cout<<"Segunda nota: ";
     cin>>aluno.nota2;
     cout<<endl;

     ofstream saida;
   
     saida.open("bancoDados.txt",ios_base::app);

     saida<<aluno.getNome()<<endl;
     saida<<aluno.getEmail()<<endl;
     saida<<aluno.getNota1()<<endl;
     saida<<aluno.getNota2()<<endl<<endl;

     saida.close();

       return 0;
}
