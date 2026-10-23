//Crie um programa em linguagem C que leia uma matriz 3 x 3 de números inteiros
//fornecidos pelo usuário e, ao final, calcule e exiba a soma de todos os seus
//elementos.

#include <iostream>

int main () {

    int matrizA[3][3];
    int matrizB[3][3];

    //Para pegar os valores oferecidos pelo usuario, usaremos os FOR.

    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++) {
            std::cout<<"Digite o valor da linha "<<i+1<<" e da coluna "<<j+1<<" da primeira matriz: "; std::cin>>matrizA[i][j]; //Como a contagem do for inicia no 0,
                                                                                                    //adicionamos um numero a contagem.
        }
    }

    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++) {
            std::cout<<"Digite o valor da linha "<<i+1<<" e da coluna "<<j+1<<" da segunda matriz: "; std::cin>>matrizB[i][j]; //Como a contagem do for inicia no 0,
                                                                                                    //adicionamos um numero a contagem.
        }
    }

    int matrizS[3][3];

std::cout<<"Soma: "<<std::endl;

    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++) {

            matrizS[i][j]=matrizA[i][j]+matrizB[i][j];

            std::cout<<matrizS[i][j]<<" ";
        }
        std::cout<<std::endl;
    }

    return 0;
}

