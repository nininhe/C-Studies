#include <iostream>
#include <string.h>
using namespace std;

int main () {
    int turma, contAluno=0;
    float nota, mediaEscola=0.0, notaTurma1=0.0, notaTurma2=0.0, notaTurma3=0.0;
    char condicao;
    string aluno;


    for (turma=1; turma<=3; turma++) { //SERVE APENAS COMO CONTADOR DE TURMA, variavel "turma" deve ser =1 pois nao existe turma 0.
        
        cout<<"Digite o nome do aluno da turma "<<turma<<": "; cin>>aluno;

        cout<<"Digite a nota do aluno "<<aluno<<": "; cin>>nota;

        do { //VALIDADOR DE NOTA
            if (nota<0.0 || nota>10)
            {
                cout<<"Nota invalida! insira novamente."<<endl;

                cout<<"Digite a nota do aluno "<<aluno<<": "; cin>>nota;
            }
        }
            while (nota<0.0 || nota>10);

        //VERIFICA SE A NOTA EH MAIOR QUE 7, SE SIM, CONTA MAIS UM NO CONTADOR
        if (nota>7) {
        contAluno++;

        // SE A TURMA FOR A 1, SUA VARIAVEL DA SOMA DAS NOTAS SOMARÁ O VALOR DA NOTA INSERIDA. SE NAO FOR A TURMA 1, SERÁ A 2, E ASSIM POR DIANTE.
            
        if (turma == 1) {
        notaTurma1+=nota;
        }
            else if (turma == 2) {
                notaTurma2+=nota;
            }
            else if (turma == 3) {
                notaTurma3+=nota;
            }
            
        }

        cout<<"Deseja inserir mais um aluno? (s/n): "; cin>>condicao;

        while (condicao == 's') { //ENQUANTO A CONDICAO EM CHAR FOR POSITIVA, ENTRARA NA ESTRUTURA DE REPETICAO. SE NAO, CAIRA NOS VALORES FINAIS.

        cout<<"Digite o nome do aluno da turma "<<turma<<": "; cin>>aluno;

        cout<<"Digite a nota do aluno "<<aluno<<": "; cin>>nota;

               do { //VALIDADOR DE NOTA
            if (nota<0.0 || nota>10)
            {
                cout<<"Nota invalida! insira novamente."<<endl;

                cout<<"Digite a nota do aluno "<<aluno<<": "; cin>>nota;
            }
        }
            while (nota<0.0 || nota>10);
            
         if (nota>7) {
        contAluno++;
        }
            
        if (turma == 1) {
        notaTurma1+=nota;
        }
            else if (turma == 2) {
                notaTurma2+=nota;
            }
            else if (turma == 3) {
                notaTurma3+=nota;
            }

        cout<<"Deseja inserir mais um aluno? (s/n): "; cin>>condicao;

        }

        cout<<"O total de alunos com media superior a 7 foi de: "<<contAluno<<endl; //VALORES FINAIS

        contAluno=0; //RESETA O CONTADOR PARA NAO CONTAR INFORMACOES DA TURMA ANTERIOR.
    }
    cout<<notaTurma1<<" "<<notaTurma2<<" "<<notaTurma3;
    mediaEscola=(notaTurma1 + notaTurma2 + notaTurma3)/3; //NÃO divida pela variavel "turma"! o laço "for" encerra quando a variavel turma se torna 4, como sabemos o numero exato de vezes que o programa será rodado, faremos por este numero!
    cout<<"A media da escola foi: "<<mediaEscola;
}