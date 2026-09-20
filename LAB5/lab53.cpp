    #include <iostream>
    #include <string.h>
    using namespace std;

    int main () {
        int a, b;
        string condicao;
        char operacao;

        cout<<"Insira o primeiro valor inteiro: ";
        cin>> a;
        cout<<"Insira o segundo valor inteiro: ";
        cin>> b;
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
            if (b == 0)
            {
                cout<<"DIVISAO INEXISTENTE";
            }
            else if (operacao == '*')
            {
                cout<<"Seu resultado eh: "<<a*b;
            }
            
            cout<<"\n";
            cout<<"Deseja prosseguir? ";
            cin>>condicao;

        while (condicao == "Sim")
        {
        cout<<"Insira o primeiro valor inteiro: ";
        cin>> a;
        cout<<"Insira o segundo valor inteiro: ";
        cin>> b;
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
            if (b == 0)
            {
                cout<<"DIVISAO INEXISTENTE";
            }
            else if (operacao == '*')
            {
                cout<<"Seu resultado eh: "<<a*b;
            }

            cout<<"\n";
            cout<<"Deseja prosseguir? ";
            cin>>condicao;
        }

        return 0;
    }