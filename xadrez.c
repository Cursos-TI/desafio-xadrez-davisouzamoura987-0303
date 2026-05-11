#include <stdio.h>

/**
 * Desafio: Movimentação de Peças de Xadrez
 * Objetivo: Simular movimentos usando estruturas de repetição (for, while, do-while).
 */

#include <stdio.h>

int main() {
    // Definição das constantes de movimento
    const int MOVIMENTO_TORRE = 5;
    const int MOVIMENTO_BISPO = 5;
    const int MOVIMENTO_RAINHA = 8;
    
    const int CAVALO_BAIXO = 2;
    const int CAVALO_ESQUERDA = 1;

    printf("Movimento da Torre:\n");
    for (int i = 0; i < MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    printf("Movimento do Bispo:\n");
    int b = 0;
    while (b < MOVIMENTO_BISPO) {
        printf("Cima, Direita\n");
        b++;
    }
    printf("\n");

    printf("Movimento da Rainha:\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < MOVIMENTO_RAINHA);
    printf("\n");

    printf("Movimento do Cavalo:\n");

   
    for (int i = 0; i < 1; i++) { 
        int j = 0;
        while (j < CAVALO_BAIXO) {
            printf("Baixo\n");
            j++;
        }
        
        printf("Esquerda\n"); 
    }

    return 0;
}