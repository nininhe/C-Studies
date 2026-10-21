#include <iostream>

int main () {
    int A[2][2] {
        {1, 2},
        {3, 4}
    };

    int B[2][2] {
        {2, 5},
        {6, 3}
    };

    int result[2][2];

    for(int i=0; i<2; i++) {
        for(int j=0; j<2; j++) {

            result[i][j]=0; // como nossa matriz resultante está sendo ACUMULATIVA, igualamos ela a zero no começo dos for "básicos"
                            // para que ela não carregue resultados de repetições anteriores.

            for(int k=0; k<2; k++) { 
                
    // K será nossa variavel auxiliar, pois a mult de matrizes funciona da seguinte forma: 
    // Coor 0,0 de ambas matrizes se multiplicam, após, na matriz um anda uma coluna pro lado (0,1) e na dois uma para baixo (1.0) 
    //para realizar a multiplicacao, e por ultimo, os resultados somam. ASSIM COM AS OUTRAS.

    //   K andará ou com a linha (i) ou com a coluna (j), sendo assim matrizes a e b, respectivamente. COMO:

                result[i][j] += A[i][k] * B[k][j]; //result = result + a * b (versao simplificada para compreensao)

    }
    std::cout<<result[i][j]<<" "; //DEMONSTRA OS RESULTADOS DO PROGRAMA, importante estar dentro das chaves do for da linha e da coluna.
}
std::cout<<std::endl; //Quando chega no fim do for das linhas, pula uma linha para ir da linha 0 a 1 e prosseguir o calculo da matriz.
}
return 0;
}