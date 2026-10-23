//Crie uma função que receba uma matriz quadrada 4 x 4 de números inteiros e
//imprima na tela apenas os elementos pertencentes à sua diagonal principal (onde o
//índice da linha é igual ao índice da coluna). if i == j

#include <iostream>

int main() {

    int matriz[4][4];

    for (int i = 0; i<4; i++) {
        for (int j = 0; j<4; j++) {
            std::cout<<"Digite o valor da linha "<<i+1<<" e da coluna "<<j+1<<" da matriz: "; std::cin>>matriz[i][j];
        }
    }


        for (int i = 0; i<4; i++) {
        for (int j = 0; j<4; j++) {
            
            if(i == j) {
                std::cout<<matriz[i][j]<<" ";
            }
        }
    }
    return 0;
}
