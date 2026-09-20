#include <iostream>
#include <string.h>
using namespace std;

int main () {
    int a, b;
    string condicao;
    char operacao;

    cout<<"Insira dois valores inteiros: ";
    cin>> a, b;
    cout<<"Insira uma operacao (+, -, / ou *): ";
    cin>>operacao;

        if (operacao == '+')
        {
            cout<<"Seu resultado eh: "<<a+b;
        }
        else if (operacao == '-')
        {
            cout<<"Seu resultado eh: "<<a-b;
        }
        else if (operacao == '/' && b>0)
        {
            cout<<"Seu resultado eh: "<<a/b;
        }
        else if (operacao == '*')
        {
            cout<<"Seu resultado eh: "<<a*b;
        }

        cout<<"Deseja prosseguir? "<<condicao;

    while (condicao == "Sim")
    {
        if (operacao == '+')
        {
            cout<<"Seu resultado eh: "<<a+b;
        }
        else if (operacao == '-')
        {
            cout<<"Seu resultado eh: "<<a-b;
        }
        else if (operacao == '/')
        {
            cout<<"Seu resultado eh: "<<a/b;
        }
        else if (operacao == '*')
        {
            cout<<"Seu resultado eh: "<<a*b;
        }

        cout<<"Deseja prosseguir? "<<condicao;
    }
    
    return 0;
}