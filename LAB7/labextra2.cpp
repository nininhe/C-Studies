#include <iostream>

int main () {
    int num, i;
    char cond;

    do {
    std::cout<<"Digite um numero de 1 a 10: "; std::cin>>num;

    while (num<1 || num>10) {
        std::cout << "Numero invalido. Digite novamente: "; std::cin >> num;
    }

    for (i=1; i<=10; i++ ) {
        std::cout<< num << "x" << i << "=" << num*i<<"\n";
    }
    std::cout<<"Deseja inserir outro numero? (SIM=1 NAO=0): "; std::cin>>cond;

    } while (cond == '1');
    
    return 0;
}