/*Prática em Polimorfismo, Classes Abstratas e Interfaces.

Estudo de caso: convencer os programadores da empresa de
pesquisas estatísticas DataFruta a utilizar técnicas melhores de
programação aprendidas durante a residência de software.*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Data
{
    int dia, mes, ano;

public:
    // comparar data
    static int compara(Data d1, Data d2)
    {

        return 0;
    }

    Data(int _dia, int _mes, int _ano)
    {
        dia = _dia;
        mes = _mes;
        ano = _ano;
    }
    string toString()
    {
        string ret = "";
        ret.append(to_string(dia));
        ret.append("/");
        ret.append(to_string(mes));
        ret.append("/");
        ret.append(to_string(ano));
        return ret;
    }
};

class Lista
{
public:
    virtual void entradaDeDados() = 0;
    virtual void mostraMediana() = 0;
    virtual void mostraMenor() = 0;
    virtual void mostraMaior() = 0;
    virtual void listarEmOrdem() = 0;
    virtual void mostraNPrimeiros(int n) = 0;
};

class ListaNomes : public Lista
{
    vector<string> lista;

public:
    void entradaDeDados()
    {
        int n;
        cout << "Quantos nomes deseja adicionar? ";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            string nome;
            cout << "Digite o nome " << i + 1 << ": ";
            cin >> nome;
            cin.ignore();
            getline(cin, nome);
            lista.push_back(nome);
        }
    }

    void mostraMediana()
    {
        if (lista.size() % 2 == 1)
        {
            cout << "A mediana é: " << lista[lista.size() / 2] << endl;
        }
        else
        {
            cout << "A mediana está entre: " << lista[lista.size() / 2 - 1] << " e " << lista[lista.size() / 2] << endl;
        }
    }

    void mostraMenor()
    {
        if (!lista.empty())
        {
            string menor = lista[0];
            for (string nome : lista)
            {
                if (nome < menor)
                {
                    menor = nome;
                }
            }
            cout << "O menor nome é: " << menor << endl;
        }
        else
        {
            cout << "A lista está vazia." << endl;
        }
    }

    void mostraMaior()
    {
        if (!lista.empty())
        {
            string maior = lista[0];
            for (string nome : lista)
            {
                if (nome > maior)
                {
                    maior = nome;
                }
            }
            cout << "O maior nome é: " << maior << endl;
        }
        else
        {
            cout << "A lista está vazia." << endl;
        }
    }

    void listarEmOrdem()
    {
        if (!lista.empty())
        {
            cout << "Nomes em ordem:" << endl;
            sort(lista.begin(), lista.end());
            for (string nome : lista)
            {
                cout << nome << endl;
            }
        }
        else
        {
            cout << "A lista está vazia." << endl;
        }
    }

    void mostraNPrimeiros(int n)
    {
        if (!lista.empty())
        {
            cout << "Os primeiros " << n << " nomes:" << endl;
            for (int i = 0; i < min(n, int(lista.size())); i++)
            {
                cout << lista[i] << endl;
            }
        }
        else
        {
            cout << "A lista está vazia." << endl;
        }
    }
};

class ListaDatas : public Lista
{
    vector<Data> lista;

public:
    void entradaDeDados()
    {
        int n;
        cout << "Quantas datas deseja adicionar? ";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int dia, mes, ano;
            cout << "Digite o dia, mês e ano (separados por espaços) para a data " << i + 1 << " (formato dia-mês-ano): ";
            cin >> dia;
            cin.ignore();
            cin >> mes;
            cin.ignore();
            cin >> ano;
            Data d(dia, mes, ano);
            lista.push_back(d);
        }
    }

    void mostraMediana()
    {
        if (lista.size() % 2 == 1)
        {
            cout << "A mediana é: " << lista[lista.size() / 2].toString() << endl;
        }
        else
        {
            cout << "A mediana está entre: " << lista[lista.size() / 2 - 1].toString() << " e " << lista[lista.size() / 2].toString() << endl;
        }
    }

    void mostraMenor()
    {
        if (!lista.empty())
        {
            Data menor = lista[0];
            for (Data d : lista)
            {
                if (Data::compara(d, menor) == -1)
                {
                    menor = d;
                }
            }
            cout << "A menor data é: " << menor.toString() << endl;
        }
        else
        {
            cout << "A lista está vazia." << endl;
        }
    }

    void mostraMaior()
    {
        if (!lista.empty())
        {
            Data maior = lista[0];
            for (Data d : lista)
            {
                if (Data::compara(d, maior) == 1)
                {
                    maior = d;
                }
            }
            cout << "A maior data é: " << maior.toString() << endl;
        }
        else
        {
            cout << "A lista está vazia." << endl;
        }
    }

    void listarEmOrdem()
    {
        if (!lista.empty())
        {
            cout << "Datas em ordem:" << endl;
            sort(lista.begin(), lista.end(), [](Data &d1, Data &d2)
                 { return Data::compara(d1, d2) < 0; });
            for (Data d : lista)
            {
                cout << d.toString() << endl;
            }
        }
        else
        {
            cout << "A lista está vazia." << endl;
        }
    }

    void mostraNPrimeiros(int n)
    {
        if (!lista.empty())
        {
            cout << "As primeiras " << n << " datas:" << endl;
            for (int i = 0; i < min(n, int(lista.size())); i++)
            {
                cout << lista[i].toString() << endl;
            }
        }
        else
        {
            cout << "A lista está vazia." << endl;
        }
    }
};

class ListaSalarios : public Lista
{
    vector<float> lista;

public:
    void entradaDeDados()
    {
        int n;
        cout << "Quantos salários deseja adicionar? ";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            float salario;
            cout << "Digite o salário " << i + 1 << ": ";
            cin >> salario;
            lista.push_back(salario);
        }
    }
    void mostraMediana()
    {
        if (lista.size() % 2 == 1)
        {
            cout << "A mediana é: " << lista[lista.size() / 2] << endl;
        }
        else
        {
            float mediana = (lista[lista.size() / 2 - 1] + lista[lista.size() / 2]) / 2;
            cout << "A mediana é: " << mediana << endl;
        }
    }

    void mostraMenor()
    {
        if (!lista.empty())
        {
            float menor = lista[0];
            for (float salario : lista)
            {
                if (salario < menor)
                {
                    menor = salario;
                }
            }
            cout << "O menor salário é: " << menor << endl;
        }
        else
        {
            cout << "A lista está vazia." << endl;
        }
    }

    void mostraMaior()
    {
        if (!lista.empty())
        {
            float maior = lista[0];
            for (float salario : lista)
            {
                if (salario > maior)
                {
                    maior = salario;
                }
            }
            cout << "O maior salário é: " << maior << endl;
        }
        else
        {
            cout << "A lista está vazia." << endl;
        }
    }

    void listarEmOrdem()
    {
        if (!lista.empty())
        {
            cout << "Salários em ordem:" << endl;
            sort(lista.begin(), lista.end());
            for (float salario : lista)
            {
                cout << salario << endl;
            }
        }
        else
        {
            cout << "A lista está vazia." << endl;
        }
    }

    void mostraNPrimeiros(int n)
    {
        if (!lista.empty())
        {
            cout << "Os primeiros " << n << " salários:" << endl;
            for (int i = 0; i < min(n, int(lista.size())); i++)
            {
                cout << lista[i] << endl;
            }
        }
        else
        {
            cout << "A lista está vazia." << endl;
        }
    }
};

class ListaIdades : public Lista
{
    vector<int> lista;

public:
    void entradaDeDados()
    {
        int n;
        cout << "Quantas idades deseja adicionar? ";
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int idade;
            cout << "Digite a idade " << i + 1 << ": ";
            cin >> idade;
            lista.push_back(idade);
        }
    }

    void mostraMediana()
    {
        if (lista.size() % 2 == 1)
        {
            cout << "A mediana é: " << lista[lista.size() / 2] << endl;
        }
        else
        {
            int mediana = (lista[lista.size() / 2 - 1] + lista[lista.size() / 2]) / 2;
            cout << "A mediana é: " << mediana << endl;
        }
    }

    void mostraMenor()
    {
        if (!lista.empty())
        {
            int menor = lista[0];
            for (int idade : lista)
            {
                if (idade < menor)
                {
                    menor = idade;
                }
            }
            cout << "A menor idade é: " << menor << endl;
        }
        else
        {
            cout << "A lista está vazia." << endl;
        }
    }

    void mostraMaior()
    {
        if (!lista.empty())
        {
            int maior = lista[0];
            for (int idade : lista)
            {
                if (idade > maior)
                {
                    maior = idade;
                }
            }
            cout << "A maior idade é: " << maior << endl;
        }
        else
        {
            cout << "A lista está vazia." << endl;
        }
    }

    void listarEmOrdem()
    {
        if (!lista.empty())
        {
            cout << "Idades em ordem crescente:" << endl;
            sort(lista.begin(), lista.end());
            for (int idade : lista)
            {
                cout << idade << endl;
            }
        }
        else
        {
            cout << "A lista está vazia." << endl;
        }
    }

    void mostraNPrimeiros(int n)
    {
        if (!lista.empty())
        {
            cout << "As primeiras " << n << " idades:" << endl;
            for (int i = 0; i < min(n, int(lista.size())); i++)
            {
                cout << lista[i] << endl;
            }
        }
        else
        {
            cout << "A lista está vazia." << endl;
        }
    }
};

int main()
{
    vector<Lista *> listaDeListas;

    ListaNomes listaNomes;
    listaNomes.entradaDeDados();
    listaDeListas.push_back(&listaNomes);

    ListaDatas listaDatas;
    listaDatas.entradaDeDados();
    listaDeListas.push_back(&listaDatas);

    ListaSalarios listaSalarios;
    listaSalarios.entradaDeDados();
    listaDeListas.push_back(&listaSalarios);

    ListaIdades listaIdades;
    listaIdades.entradaDeDados();
    listaDeListas.push_back(&listaIdades);

    for (Lista *l : listaDeListas)
    {
        l->mostraMediana();
        l->mostraMenor();
        l->mostraMaior();
        l->listarEmOrdem();
        // Mostra os 3 primeiros elementos de cada lista
        l->mostraNPrimeiros(3);
    }

    return 0;
}