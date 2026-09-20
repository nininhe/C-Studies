#include <iostream>
#include <string.h>
using namespace std;

int main() {

    int id, maiorid, menorid;
    float peso, maiorpeso=0.0, menorpeso=100000.0; //ATRIBUICAO INICIAL para os valores de inicialização do programa.
    //O MAIOR PESO SERA CLARAMENTE MAIOR QUE 0, E O MENOR PESO SERA CLARAMENTE MAIOR QUE 1. 

    cout<<"Digite o ID do boi: ";
    cin>>id;

    while (id>0)
    {
    cout<<"Digite o peso do boi: ";
    cin>>peso;
    if (peso>maiorpeso)
    {
        maiorpeso=peso;
        maiorid=id;
    }
    if (peso<menorpeso)
    {
        menorpeso=peso;
        menorid=id;
    }
    cout<<"Digite o ID do boi: ";
    cin>>id;
    }
    cout<<"ID do maior boi: "<<maiorid;
    cout<<"\n";
    cout<<"Peso do maior boi: "<<maiorpeso;
    cout<<"\n";
    cout<<"ID do menor boi: "<<menorid;
    cout<<"\n";
    cout<<"Peso do menor boi: "<<menorpeso;

//HAVIA dado problema pq fiz o " espaco em vez de ' mas tava certo

    return 0;
}