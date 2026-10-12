#include <iostream>
using namespace std;

int main () {
    int i, qntd; //O jota servirá como contador do for, para ver quantas vezes o programa rodou.
    float numero, maior=0.0, menor=1000.0; //jogue valores altos no menor, pois somente com o 0 o menor será menor que 0

        cout<<"Digite o numero de vezes que deseja inserir um numero: "; cin>>qntd;

    for (i=0; i<qntd; i++) { //Como o numero é digitado, o for vai rodar a quantidade de vezes que o usuario digitou.
        //O "i" no for serve apenas para contar quantas vezes o programa rodou, para ver onde deve parar.
        //Em sua segunda condição, o "i" é comparado com as vezes que o usuario digitou, e o programa rodará enquanto o 
        //"i" for menor que o numero digitado pelo usuario.
        cout<<"Digite um numero: "; cin>>numero;

        if (numero>maior) {
            maior=numero;
        }
        if (numero<menor) {
            menor=numero;
        }
    }
    cout<<"O maior numero digitado foi: "<<maior<<endl;
    cout<<"O menor numero digitado foi: "<<menor<<endl;

return 0;
    }
