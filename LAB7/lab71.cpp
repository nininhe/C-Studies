#include <iostream>
using namespace std;

int main () {
    int i, idade, a=0, b=0, c=0, d=0;
    float peso, mediaA=0, mediaB=0, mediaC=0, mediaD=0;

for (i=0; i<2; i++) { //o "i" no for serve apenas para contar quantas vezes o programa rodou, para ver onde deve parar.

    cout<<"Digite sua idade: "; cin>>idade;
    cout<<"Digite seu peso: "; cin>>peso;

    if (idade>=1 && idade<=10) {
        mediaA+=peso;
        a++;
    }
    else if (idade>=11 && idade<=20) {
        mediaB+=peso;
        b++;    
    }
    else if (idade>=21 && idade<=30) {
        mediaC+=peso; 
        c++;
    }
    else if (idade>30) {
        mediaD+=peso; 
        d++;
    }
}

cout<<"A media de peso para a faixa etária 1-10 anos é: ";
    if (mediaA == 0)
    {
        cout<< "Nao foi constado nenhuma informacao na faixa etaria."<<endl;
    }
    else {
    cout<<mediaA/a<<endl;
        }
cout<<"A media de peso para a faixa etária 11-20 anos é: "<<endl;
        if (mediaB == 0)
    {
        cout<< "Nao foi constado nenhuma informacao na faixa etaria."<<endl;
    }
    else {
    cout<<mediaB/b<<endl;
        }
cout<<"A media de peso para a faixa etária 21-30 anos é: "<<endl; 
        if (mediaC == 0)
    {
        cout<< "Nao foi constado nenhuma informacao na faixa etaria."<<endl;
    }
    else {
    cout<<mediaC/c<<endl;
        }
cout<<"A media de peso para a faixa etária >30 anos é: "<<endl;
        if (mediaD == 0)
    {
        cout<< "Nao foi constado nenhuma informacao na faixa etaria."<<endl;
    }
    else {
    cout<<mediaD/d<<endl;
        }

return 0;
}