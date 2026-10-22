// Crie uma função que receba um valor e informe se ele é positivo ou não
#include <iostream>

void positivo(int num) { //QUANDO NAO HA RETURN, SERA VOID.
    if (num > 0) {
        std::cout<<"Seu numero eh positivo!";
    }
    else if (num < 0) {
        std::cout<<"Seu numero nao eh positivo.";
    }
    else {
        std::cout<<"Seu numero eh zero.";

    }
}

int main() {

    int numero;

    std::cout<< "Digite um numero: "; std::cin>>numero;

    positivo(numero); //aplica a variavel numero as regulamentacoes do positivo.

    return 0;
}

