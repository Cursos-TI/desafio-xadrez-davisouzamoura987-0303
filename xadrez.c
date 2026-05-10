#include <stdio.h>

/**
 * Desafio: Movimentação de Peças de Xadrez
 * Objetivo: Simular movimentos usando estruturas de repetição (for, while, do-while).
 */

int main() {
    // Definição das constantes de movimento para facilitar a manutenção
    const int MOVIMENTO_TORRE = 5;
    const int MOVIMENTO_BISPO = 5;
    const int MOVIMENTO_RAINHA = 8;

    // --- Movimentação da Torre ---
    // A Torre move-se 5 casas para a DIREITA.
    // Utilizaremos a estrutura 'for', ideal quando sabemos o número exato de repetições.
    printf("Movimento da Torre:\n");
    for (int i = 0; i < MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n"); // Quebra de linha para organizar a saída

    // --- Movimentação do Bispo ---
    // O Bispo move-se 5 casas na diagonal CIMA e DIREITA.
    // Utilizaremos a estrutura 'while', que testa a condição antes de cada execução.
    printf("Movimento do Bispo:\n");
    int b = 0;
    while (b < MOVIMENTO_BISPO) {
        printf("Cima, Direita\n");
        b++;
    }
    printf("\n");

    // --- Movimentação da Rainha ---
    // A Rainha move-se 8 casas para a ESQUERDA.
    // Utilizaremos a estrutura 'do-while', que garante pelo menos uma execução do bloco.
    printf("Movimento da Rainha:\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < MOVIMENTO_RAINHA);

    return 0;
}