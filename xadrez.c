#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função que chama o movimento do bispo
void bispo(int n) {
    int j = 1;

    if (n > 0) {
        for (int i = 0; i < 1; i++) {
            printf("Cima\n");
            
            while (j--)
            {
                printf("Direita\n");
            }
        }

        bispo(--n);
    } else {
        printf("\n");
    }
}

void torre(int n) {
    if (n > 0) {
        printf("Direita\n");

        torre(--n);
    } else {
        printf("\n");
    }
}

void rainha(int n) {
    if (n > 0) {
        printf("Esquerda\n");

        rainha(--n);
    } else {
        printf("\n");
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int towerMoves = 5, queenMoves = 8, bishopMoves = 5;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    for (int i = 1; i <= bishopMoves; i++) {
        printf("Bispo: Cima, Direita\n");
    }

    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    int x = 1;

    do {
        printf("Torre: Direita\n");
        x++;

    } while (x <= towerMoves);
    
    printf("\n");
    

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    int y = 1;

    while (y <= queenMoves)
    {
       printf("Rainha: Esquerda\n");
       y++;

    }
    


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    int cavaloB = 2;

    for (int i = 1; i <= 1; i++) {

        while (cavaloB > 0)
        {
            printf("Baixo\n");
            cavaloB--;
        }
        printf("Esquerda\n");

    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    bispo(5);
    torre(5);
    rainha(8);

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    for (int i = 2, j = 1; i > 0; i--) {
        printf("Baixo\n");
        if (i == j) printf("Direita\n");
    }

    return 0;
}
