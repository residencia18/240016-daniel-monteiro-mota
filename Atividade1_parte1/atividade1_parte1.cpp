#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

struct Passageiro
{
    char cpf;
    char nome;
    char dtNascimento;
    int numAutorizacao;
    
}passageiro;

struct Roteiro
{
    
   int codigo;
   char data_horaPrevista;
   char duracao_prevista;
   char origem;
   char destino;

}roteiro;

int incluir(char nome, char cpf, char dtNascimento,int numAutorizacao)
{
      cout<<"Informe o nome do passageiro: ";
      cin>>passageiro.nome;
      cout<<"Informe o CPF do passageiro: ";
      cin>>passageiro.cpf;
      cout<<endl;
      cout<<"Informe a data de nascimento do passageiro: ";
      cin>>passageiro.dtNascimento;
      cout<<endl;
      cout<<"Informe o numero de autorizacao: ";
      cin>>passageiro.numAutorizacao;
      cout<<endl;
}

int main()
{

   int opcao,tamanho = 0;
   int i[tamanho];
    
    cout<<"Informe a opcao desejada: "<<endl;
    cout<<"1 - Incluir"<<endl;
    cout<<"2 - Excluir"<<endl;
    cout<<"3 - Alterar"<<endl;
    cout<<"4 - Listar"<<endl;
    cout<<"5 - Localizar"<<endl;
    cout<<"0 - SAIR"<<endl;
    cin>>opcao;
    
    if(opcao == 1)
    {
       char nome,cpf,dtNasc;
       int num_autiriza; 
       incluir(nome[i],cpf[i],dtNasc[i],num_autiriza[i]);
       tamanho++;
    }

    return 0;
}
