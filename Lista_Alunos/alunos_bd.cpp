#include<iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <cmath>
#include <math.h>
#include <fstream>
#include <vector>
using namespace std;


class Alunos
{
    public:
    string nome; 
    string email;  
    int nota1;
     int nota2;

//Metodos GET e SET
  string getNome() 
  {
  	return this->nome;
  }
  void setNome(string nome) 
  {
  	this->nome = nome;
  }

 string getEmail() 
 {
 	return this->email;
 }
 void setEmail(string email) 
 {
 	this->email = email;
 }

 int getNota1() 
 {
 	return this->nota1;
 }
 void setNota1(int nota1) 
 {
 	this->nota1 = nota1;
 }

  int getNota2() 
  {
  	return this->nota2;
  }
  void setNota2(int nota2) 
  {
  	this->nota2 = nota2;
  }
/**************************************************************************************/
  public:
  void inserirAluno() //função para inserir os dados
  {
    cout<<"Nome do ALUNO: ";
    cin>>nome;
    cout<<"Email do ALUNO: ";
    cin>>email;
    cout<<"Primeira nota do ALUNO: ";
    cin>>nota1;
    cout<<"Seguna nota do ALUNO: ";
    cin>>nota2;    
  }

/**************************************************************************************/
  public:
  void alterarAluno(vector<Alunos> &aluno) //função para alterar os dados do aluno informado
  {
     string e_mail;
     cout<<"Informe o email do aluno a ser alterado: ";
     cin>>e_mail;

     for(auto& altera: aluno )
     {
        if(altera.email == email)
        {
            cout<<"Informe o novo NOME: ";
            getline(cin, altera.nome);
            cout<<"Informe o novo EMAIL: ";
            getline(cin, altera.email);
            cout<<"Informe a nova NOTA 1: ";
            cin>>altera.nota1;
            cout<<"Informe a nova NOTA 2: ";
            cin>>altera.nota2;
        }
        else{cout<<"Aluno nao encontrado!";}
     }
  }

/**************************************************************************************/
  public:
  void listarAlunos(const vector<Alunos> &aluno) //função para listar todos os alunos inseridos no sistema
  {
    for(const auto& lista: aluno)
    {
        cout<<endl;
        cout<<"LISTA DE ALUNOS"<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"Nome: "<<lista.nome<<endl;
        cout<<"Email: "<<lista.email<<endl;
        cout<<"Nota 1: "<<lista.nota1<<endl;
        cout<<"Nota 2: "<<lista.nota2<<endl;
        cout<<"----------------------------------------"<<endl;
    }
  }

/**************************************************************************************/ 
void excluirAluno(vector<Alunos> &aluno)
{
     string email_;
     cout<<"Informe o email do aluno a ser excluido: ";
     cin>>email_;

     for(auto it = aluno.begin(); it!=aluno.end(); ++it)
     {
        if(it->email == email_)
        {
            aluno.erase(it);
            cout<<"Aluno excluido com sucesso!";
            return;
        }
     }
}
    
};

/**************************************************************************************/
class BancoDeDados
{
    public:
    void salvarDados(Alunos aluno)
    {   
        ofstream arquivo;

        arquivo.open("BancoDeDados.txt",ios::app);
        arquivo<<aluno.getNome()<<endl;
        arquivo<<aluno.getEmail()<<endl;
        arquivo<<aluno.getNota1()<<endl;
        arquivo<<aluno.getNota2()<<endl;
        cout<<"----------------------------------------"<<endl;
        arquivo.close();
    }
};


int main()
{
    Alunos alunos; //objeto alunos
    BancoDeDados bd; //objeto banco de dados
    vector<Alunos> aluno; //vetor de alunos 
   
    alunos.inserirAluno(); //chamada da função de inserir
    aluno.push_back(alunos); //metodo para salvar os dados ao final da ultima inserção
    alunos.listarAlunos(aluno); //chamada da função de listar
    alunos.alterarAluno(aluno); //chamada da função de alterar
    bd.salvarDados(alunos); //chamada da função que salva os dados no arquivo de saida
    alunos.excluirAluno(aluno); //chamada da função que exclui um aluno do sistema
    
     
    return 0;
}
