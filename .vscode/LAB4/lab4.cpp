#include <iostream>
#include <string.h>
using namespace std;

int arqsc1, arqsc2, arqsc3, arqrs1, arqrs2, arqrs3, arqpr1, arqpr2, arqpr3;

int main () {

// DECLARACAO DE PONTOS santa catarina

cout << "Numero de pontos do primeiro arqueiro de Santa Catarina: ";
cin >> arqsc1;

cout << "Numero de pontos do segundo arqueiro de Santa Catarina: ";
cin >> arqsc2;

cout << "Numero de pontos do terceiro arqueiro de Santa Catarina: ";
cin >> arqsc3;

    cout << "\n";

// DECRESCENTE SANTA CATARINA

if (arqsc1 < arqsc2)
{
    int aux = arqsc1; // guarda o valor de arqsc1 temporariamente
    arqsc1 = arqsc2; // arqsc1 recebe o valor de arqsc2
    arqsc2 = aux; // arqsc2 recebe o valor original de arqsc1 (guardado em aux)
}

if (arqsc2 < arqsc3)
{
    int aux = arqsc2; // guarda o valor de arqsc1 temporariamente
    arqsc2 = arqsc3; // arqsc1 recebe o valor de arqsc2
    arqsc3 = aux; // arqsc2 recebe o valor original de arqsc1 (guardado em aux)
}

if (arqsc1 < arqsc2)
{
    int aux = arqsc1; // guarda o valor de arqsc1 temporariamente
    arqsc1 = arqsc2; // arqsc1 recebe o valor de arqsc2
    arqsc2 = aux; // arqsc2 recebe o valor original de arqsc1 (guardado em aux)
}

cout<< "A ordem decrescente dos pontos dos arqueiros de Santa Catarina eh: " << arqsc1 << " " << arqsc2 << " " << arqsc3; //OCORRE UMA TROCA DE VALORES! O valor de arq1, arq2 e arq3 nao é mais o inserido no cin.

    cout << "\n";

    // MEDIA ARTIMETICA COM IF E ELSE - eQUIPE SC

  cout << "\n";

if (arqsc1+arqsc2+arqsc3>100)
{
    cout<<"A media aritmetica eh "<<(arqsc1+arqsc2+arqsc3)/3;
}
else 
{
    cout<<"Equipe desclassificada";
}

    cout << "\n";


// DECLARACAO DE PONTOS rio grande do sul

    cout << "\n";

cout << "Numero de pontos do primeiro arqueiro do Rio Grande do Sul: ";
cin >> arqrs1;

cout << "Numero de pontos do segundo arqueiro do Rio Grande do Sul: ";
cin >> arqrs2;

cout << "Numero de pontos do terceiro arqueiro do Rio Grande do Sul: ";
cin >> arqrs3;

    cout << "\n";

// DECRESCENTE RIO GRANDE

if (arqrs1 < arqrs2)
{
    int aux = arqrs1; 
    arqrs1 = arqrs2; 
    arqrs2 = aux; 
}

if (arqrs2 < arqrs3)
{
    int aux = arqrs2; 
    arqrs2 = arqrs3; 
    arqrs3 = aux; 
}

if (arqrs1 < arqrs2)
{
    int aux = arqrs1; 
    arqrs1 = arqrs2; 
    arqrs2 = aux; 
}

cout<< "A ordem decrescente dos pontos dos arqueiros do Rio Grande do Sul eh: " << arqrs1 << " " << arqrs2 << " " << arqrs3;

    cout << "\n";

// MEDIA ARTIMETICA COM IF E ELSE - eQUIPE RS

  cout << "\n";

if (arqrs1+arqrs2+arqrs3>100)
{
    cout<<"A media aritmetica eh " <<(arqrs1+arqrs2+arqrs3)/3;
}
else 
{
    cout<<"Equipe desclassificada";
}

    cout << "\n";

// DECLARACAO DE PONTOS parana

    cout << "\n";

cout << "Numero de pontos do primeiro arqueiro do Parana: ";
cin >> arqpr1;

cout << "Numero de pontos do segundo arqueiro do Parana: ";
cin >> arqpr2;

cout << "Numero de pontos do terceiro arqueiro do Parana: ";
cin >> arqpr3;

    cout << "\n";

// DECRESCENTE RIO GRANDE

if (arqpr1 < arqpr2)
{
    int aux = arqpr1; 
    arqpr1 = arqpr2; 
    arqpr2 = aux; 
}

if (arqpr2 < arqpr3)
{
    int aux = arqpr2; 
    arqpr2 = arqpr3; 
    arqpr3 = aux; 
}

if (arqpr1 < arqpr2)
{
    int aux = arqpr1;
    arqpr1 = arqpr2;
    arqpr2 = aux;
}

cout<< "A ordem decrescente dos pontos dos arqueiros do Parana eh: " << arqpr1 << " " << arqpr2 << " " << arqpr3;


// MEDIA ARTIMETICA COM IF E ELSE - eQUIPE PR

  cout << "\n";

if (arqpr1+arqpr2+arqpr3>100)
{
    cout<<"A media aritmetica eh " <<(arqpr1+arqpr2+arqpr3)/3;
}
else 
{
    cout<<"Equipe desclassificada";
}
    cout << "\n";

return 0;
}