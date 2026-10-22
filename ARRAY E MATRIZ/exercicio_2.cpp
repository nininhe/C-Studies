// Crie uma função em linguagem C que receba 2 números e retorne o maior valor.
#include <iostream>

int maior(int a, int b) {
    int maiorvalor;

    if (a>b) {
        maiorvalor=a;
    }
    else {
        maiorvalor=b;
    }
    return maiorvalor;
}

int main() {
    int n1, n2;

    std::cout<<"Digite um numero inteiro: "; std::cin>>n1;
    std::cout<<"Digite outro numero inteiro: "; std::cin>>n2;

    int s;

    s=maior(n1, n2);

    std::cout<<"O maior numero eh: "<<s;

}