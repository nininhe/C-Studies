#include <iostream>
#include <string.h>
using namespace std;

int main () {
    float a, b, escolha;

    cout<<"Insira o primeiro valor: ";
    cin>> a;
    cout<<"Insira o segundo valor: ";
    cin>> b;
    cout<<"AGORA, EH HORA DE ESCOLHER A OPERACAO!"<<"\n"<<"Digite 1 para soma, 2 para subtracao, 3 para multiplicacao e 4 para divisao: ";
    cin>> escolha;
    cout << "Voce escolheu: " << escolha << endl;

if (escolha == 1)
{
    float resultado;
    resultado=a+b;
    cout<<resultado;
}

if (escolha==2)
    {
    float resultado;
    resultado=a-b;
    cout<<resultado;
    }
  
if (escolha==3)
    {
    float resultado;
    resultado=a*b;
    cout<<resultado;
    }
 
if (escolha==4)
    {
    float resultado;
    resultado=a/b;
    cout<<resultado;
    }  

    return 0;
}