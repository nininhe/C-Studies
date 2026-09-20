#include <iostream>
#include <string.h>
using namespace std;

int main () {

    string olhos, sexo, cabelo;
    int idade, maioridade=0;
    float cont=0, contr=0;

    cout<<"Digite a idade do habitante: ";
    cin>>idade;

    while (idade>0) {

      contr++;

    cout<<"Digite o sexo do habitante: ";
    cin>>sexo;
    cout<<"Digite a cor dos olhos do habitante (azuis, verdes ou castanhos): ";
    cin>>olhos;
    cout<<"Digite a cor dos cabelos do habitante (louros, castanhos, pretos): ";
    cin>>cabelo;

    if (idade>maioridade)
    {
        maioridade=idade;
    }

    if (idade>=18 && idade<=35)
    {
        if (sexo == "feminino")
        {
            if (olhos == "verdes")
            {
                if (cabelo == "louros")
                {
                cont++;
                }
            }
        }
    }

    cout<<"Digite a idade do habitante: ";
    cin>>idade;

}

cout<<"A maior idade eh "<<maioridade;
cout<<"\n";
cout<<"Quantidade de pessoas especifico "<<cont<<' '<<"Nao especifico: "<<contr;
cout<<"\n";
cout<<"Porcentagem de pessoas dentro da especificacao: "<<(cont/contr)*100<<'%';

return 0;

}