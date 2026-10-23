// Crie uma função em linguagem C que receba 3 notas de um aluno (valores reais)
//e retorne a média aritmética dessas notas. Na função main, informe se o aluno foi
//aprovado (média maior ou igual a 7.0) ou reprovado.

#include <iostream>

int notas(float a, float b, float c) {
    float media;
    media=(a+b+c)/3;
    return media;
}

int main() {
    float a, b, c, m;
std::cout<<"Digite a primeira nota do aluno: "; std::cin>>a;
std::cout<<"Digite a segunda nota do aluno: "; std::cin>>b;
std::cout<<"Digite a terceira nota do aluno: "; std::cin>>c;

m=notas(a, b, c);

if (m >= 7.0 && m <= 10.0) { //SE A NOTA FOR MAIOR IGUAL A 7 E MENOR IGUAL A 10, PASSA.
    std::cout<<"O aluno foi aprovado!";
}
else if (m < 7.0 && m >= 0.0) {
    std::cout<<"O aluno foi reprovado.";
}
else {
    std::cout<<"Media invalida.";
}
    
return 0;

}
