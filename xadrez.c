#include <stdio.h>

void moverBispo(int casas) {
    if (casas > 0)
    {
        printf("Bispo Bispo movimentou-se uma casa a cima e uma casa a direita \n");
        moverBispo(casas-1);
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
    while (bispo < 5)
    {   
        printf("Bispo movimentou-se uma casa a cima e uma casa a direita \n");
        bispo++;
    }

printf("\n");        
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // 5 casas para a direita:
    do
    {
        printf("Torre movimentou-se uma casa a direita\n");
        torre++; //incremento
    } while ( torre < 5);

printf("\n");    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // 8 casas para a esquerda:
    for (rainha = 0; rainha < 8; rainha++)
    {
        printf("Rainha movimentou-se uma casa a esquerda \n");
    }
    
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    do
    {
        {
            for (cavalo = 0; cavalo <= 2; cavalo++) {
                printf ("Cavalo movimentou-se uma casa a cima \n");
                cavalo++;//incremento interno
            }
        }
        cavalo++;//incremento externo
        printf("Cavalo movimentou-se uma casa a direita \n");
    } while (cavalo < 1);
 
printf("\n");
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
        moverBispo(5);
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    for (cavalo = 0; cavalo < 2; cavalo++)
    {

    }
    


    return 0;
}
