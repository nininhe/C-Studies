#include <iostream>
using namespace std;

int main () {
int id, ano, vinculo, renda, prevsocial;

cout<<"Insira seu ID: ";
cin>>id;

while (id >= 0)
{
cout<<"Insira o ano de nascimento: ";
cin>>ano;   
cout<<"Insira o ano de início do vinculo empregatico: ";
cin>>vinculo;
cout<<"Insira sua renda mensal: ";
cin>>renda;
cout<<"Insira o ano de inicio na contribuicao a previdência social: ";
cin>>prevsocial;

ano=2026-ano;
vinculo=2026-vinculo;
prevsocial=2026-prevsocial;

if (ano>=25 && vinculo>= 3 && ano>0)
{
    cout<<"Sua idade: "<<ano<<"\n"<<"Seu tempo de vinculo empregatico: "<<vinculo<<"\n"<<"Seu tempo de contribuicao a previdencia social: "<<prevsocial<<"\n";

    cout<<"Você está apto a receber o beneficio."<<endl;
}
else if (ano>=18|| ano<=24 && renda>4000)
{
        cout<<"Sua idade: "<<ano<<"\n"<<"Seu tempo de vinculo empregatico: "<<vinculo<<"\n"<<"Seu tempo de contribuicao a previdencia social: "<<prevsocial<<"\n";

    cout<<"Você está apto a receber o beneficio."<<endl;
}
else if (prevsocial>10)
{
        cout<<"Sua idade: "<<ano<<"\n"<<"Seu tempo de vinculo empregatico: "<<vinculo<<"\n"<<"Seu tempo de contribuicao a previdencia social: "<<prevsocial<<"\n";

    cout<<"Você está apto a receber o beneficio."<<endl;
}
else
{
        cout<<"Sua idade: "<<ano<<"\n"<<"Seu tempo de vinculo empregatico: "<<vinculo<<"\n"<<"Seu tempo de contribuicao a previdencia social: "<<prevsocial<<"\n";

    cout<<"Você não está apto a receber o beneficio."<<endl;
}
}

return 0;

}