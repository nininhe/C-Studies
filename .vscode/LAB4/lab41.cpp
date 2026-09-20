//TRIANGULO ISOSCELES = ao menos dois lados iguais
// EQUILATERO a == b == c
// ESCALENO todos os lados com medidas diferentes

#include <iostream>
#include <string.h>
using namespace std;

int main () {

    float a, b, c;

    cout<<"Insira os valores dos tres lados de um triangulo: ";
    cin>> a >> b >> c;

if (a == 0 || b == 0 || c == 0) // ||=OU

{
    cout<<"NAO eh um triangulo!"<<endl;
}
 
else if (a + b <= c ||
        a + c <= b ||
        b + c <= a) {

    cout<<"NAO eh um triangulo!"<<endl;
}

if (a == b && b == c)
{
    cout<<"Seu triangulo eh equilatero!";
}
else if (a == b || b == c || a == c) //SE qualquer um dos lados for igual um ao outro!
    {
      cout<<"Seu triangulo eh isoceles!";
    }
else {
    cout<<"Seu triangulo eh escaleno!";
}


return 0;

    // OU SEJA, segue as condições:
    //SE algum lado for igual a 0, nao é triangulo
    //SE a soma de dois lados for menor ou igual o lado restante, nao é triangulo
    //SE todos os lados forem iguais (utiliza-se a funçao && "E")
    //SE algum lado for igual (utiliza-se a funçao || "OU")
    //SE nao for nenhuma opçao, o triangulo eh escaleno.
}
