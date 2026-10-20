#include <iostream>

int main () {
    int matrizA[2][2] {
        {2, 4},
        {6, 8}
    };

    int matrizB[2][2] {
        {3, 6},
        {9, 12}
    };

    int matrizMulti[2][2];

    for (int i=0; i<2; i++) { //CONTA AS LINHAS DA MATRIZ.
        for (int j=0; j<2; j++) { // CONTA AS COLUNAS DA MATRIZ

            matrizMulti[i][j]=matrizA[i][j] * matrizB[i][j];

            std::cout<<matrizMulti[i][j]<<" ";

        }
        std::cout<< std::endl;
    }

    //                  ^^^
    // NO LAÇO DO FOR, acontecerá a multiplicacão das matrizes, ou seja: 
    //PRIMEIRA: pegará o i(linha)=0 e o j(coluna)=0, ou seja, nossas coordenadas seráo 0,0. 
        //OLHANDO PARA A MATRIZ:
            //    0  1
            // 0 (2, 4)         ENTÃO, O PRIMEIRO NUMERO DA MATRIZ A SERÁ 2
            // 1 (6, 8)
    //SEGUNDA: pegará o i(linha)=0 (pois ainda estamos dentro do segundo for) e o j(coluna)=1 (aumentou), ou seja, nossas coordenadas
    // são: 0,1. 
    //TERCEIRA: agora a linha for da coluna acaba, pois o j deve ser menor que 2, ou seja, voltamos para o for das linhas, QUE É 
    // ADIOCIONADO MAIS 1, ou seja, nossas coordenadas são i=1, e como passaremos pelo j como se fosse uma primeira vez, j=0.
    //QUARTA: por ultimo, o j aumenta mais um. (1,1)

    return 0;
}