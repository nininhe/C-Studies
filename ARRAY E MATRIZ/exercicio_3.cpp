// Crie uma função em linguagem C chamado Dado() que retorna, através de
// sorteio, um número de 1 até 6. Execute a função 100 vezes e conte quantas vezes
// cada número saiu.

#include <iostream>
#include <stdlib.h> // Necessário para as funções rand() e srand()
#include <time.h> // Necessário para a função time()

int dado() {

    return (rand() % 6) + 1; //A FUNCAO INT PODE NAO TER NADA NAS ()< QUANDO PEDE PRA RETORNAR, RETORNE.
 
//A função rand() gera um número inteiro gigante.
//Usamos o resto da divisão (%) por 6 para limitar o resultado entre 0 e 5.
//Somamos + 1 para que o resultado final seja de 1 a 6.

}

int main () {

srand(time(NULL)); 
int sorteio;
int resultado[6]={0}; 

for (int i=0; i<100; i++) {

sorteio = dado();

resultado[sorteio - 1]++; //resultado guarda o valor do sorteio -1, que sera adicionado quando imprimir na tela. 
//ASSIM POIS O J INICIA NO 0, E PARA CONTAR PRECISAMOS QUE INICIE NO 1.
}

for (int j=0; j<6; j++) { //CONTA CADA FACE DO DADO CONTIDA NO ARRAY RESULTADO.
    std:: cout<<"Quantidade de respostas "<<j+1<<":"<<resultado[j]<< std::endl; //O FOR pega resultado por resultado, 
}

return 0;
}

