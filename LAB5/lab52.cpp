#include <iostream>
#include <string.h>
using namespace std;

int main() {

int consumidor, tipo, kwh;
float residencial=0.3, comercial=0.5, industrial=0.7, acumresi=0, acumcome=0, acumindu=0;

cout<<"Insira o numero do consumidor: ";
cin>>consumidor;

while (consumidor>0)
{
cout<<"Insira o numero de KwH consumidos: ";
cin>>kwh;
cout<<"Insira o tipo do consumidor (1 para residencial, 2 para comercial, 3 para industrial): ";
cin>>tipo;

if (tipo == 1)
{
    cout<<"Custo total para o consumidor "<<consumidor<<':'<<' '<<kwh*residencial<<" reais";
        cout<<"\n";

        acumresi=acumresi + kwh;

}
else if (tipo ==2)
{
    cout<<"Custo total para o consumidor "<<consumidor<<':'<<' '<<kwh*comercial<<" reais";
        cout<<"\n";

        acumcome=acumcome + kwh;

}
else if (tipo == 3)
{
    cout<<"Custo total para o consumidor "<<consumidor<<':'<<' '<<kwh*industrial<<" reais";
        cout<<"\n";

        acumindu=acumindu + kwh;

}
cout<<"Insira o numero do consumidor: ";
cin>>consumidor;
}

acumresi=acumresi*residencial;
acumcome=acumcome*comercial;
acumindu=acumindu*industrial;

cout<<"O total de reais a serem cobrados em residencias eh de: "<<acumresi;
     cout<<"\n";
cout<<"O total de reais a serem cobrados em comercios eh de: "<<acumcome;
    cout<<"\n";
cout<<"O total de reais a serem cobrados em industrias eh de: "<<acumindu;
    cout<<"\n";

if (acumresi>0 && acumcome>0)
{
    cout<<"A media de consumo dos primeiros dois tipos eh de: "<<(acumresi+acumcome)/2;
}

return 0;
}