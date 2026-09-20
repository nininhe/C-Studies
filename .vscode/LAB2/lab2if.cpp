#include <iostream>
#include <string.h>
using namespace std;

int main () {
    int numero, numeroFormado;

    cout<<"Escreva um numero inteiro de 4 digitos: ";
    cin>>numero;

numeroFormado=numero/100; //no int, a parte depois da virgula é DESCONSIDERADA.

if (numeroFormado % 4 == 0)
{
    cout<<"Seu numero eh multiplo de 4!";
}
else
{
    cout<<"Seu numero NAO eh multiplo de 4!";
}

    return 0;
}