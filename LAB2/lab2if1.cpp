#include <iostream>
#include <string.h>
using namespace std;

int main () {
    float salab, sala30, prest;

    cout<<"Digite seu salario bruto: ";
    cin>>salab;
    cout<<"Digite o valor da prestacao: ";
    cin>>prest;

    sala30=salab*0.3;

    if(sala30>prest)
    {
        cout<<"Pode ser concedido";
    }

    return 0;
}