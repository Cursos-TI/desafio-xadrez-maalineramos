#include <stdio.h>

void moverBispo(int casasB) {
    if (casasB > 0){
        for (int b = 0; b < 1; b++)
        {
            printf("Bispo movimentou-se à direta... \n");
        }
        
        printf("Bispo movimentou-se uma casa acima...\n");
        moverBispo(casasB-1);
    }
}

void moverTorre(int casasT){
    if (casasT > 0){
        printf("Torre movimentou-se uma casa à direita... \n");
        moverTorre(casasT-1);
    }
}

void moverRainha(int casaR){
    if (casaR > 0){
        printf("Rainha movimentou-se uma casa à esquerda... \n");
        moverRainha(casaR-1);
    }
}

void moverCavalo(int casasC){
    if (casasC > 0){

        for (int c = 0; c < 2; c++) 
        {
            printf ("Cavalo movimentou-se uma casa acima... \n");
            
        }

        printf  ("Cavalo movimentou uma casa à direita...\n");
        moverCavalo(casasC-1);
        
    } 
}
// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int bispo = 0, torre = 0, rainha, cavalo;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // 5 casas na diagonal superior direita
    while (bispo < 5){   
        printf("Bispo movimentou-se uma casa acima \n");
        bispo++;
        for ( int i = 0; i < 1; i++)
        {
            printf("Bispo movimentou-se uma casa à direita \n");
        }
    }

    printf("\n");        
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // 5 casas para a direita:
    do{
        printf("Torre movimentou-se uma casa à direita\n");
        torre++; //incremento
    } while ( torre < 5);

    printf("\n");    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // 8 casas para a esquerda:
    for (rainha = 0; rainha < 8; rainha++)
    {
        printf("Rainha movimentou-se uma casa à esquerda \n");
    }
    printf("\n");
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    do{
        {
            for (cavalo = 0; cavalo < 2; cavalo++) {
                printf ("Cavalo movimentou-se uma casa acima \n");
                
            }
        }
        cavalo++;//incremento externo
        printf("Cavalo movimentou-se uma casa à direita \n");
    } while (cavalo < 1);
 
    printf("\n");
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
     
    //Movimentos recursivos:

        moverBispo(5);

    printf("\n");
      
        moverTorre(5);

    printf("\n"); 
        
        moverRainha(8);

    printf("\n");
        
        moverCavalo(1);

    return 0;
}
