#include <stdio.h>

/**
 * Desafio Final: Movimentos Complexos de Xadrez
 * Objetivo: Implementar recursividade para Torre, Bispo e Rainha, 
 * além de loops aninhados e controle de fluxo para o Cavalo.
 */

// --- FUNÇÕES RECURSIVAS ---


void moverTorre(int casas) {
    if (casas <= 0) return; 
    printf("Direita\n");
    moverTorre(casas - 1); 
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    
    for (int i = 0; i < 1; i++) { // Vertical
        for (int j = 0; j < 1; j++) { // Horizontal
            printf("Cima, Direita\n");
        }
    }
    
    moverBispoRecursivo(casas - 1);
}

int main() {
   
    const int MOV_TORRE = 5;
    const int MOV_BISPO = 5;
    const int MOV_RAINHA = 8;

    printf("Movimento da Torre:\n");
    moverTorre(MOV_TORRE);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispoRecursivo(MOV_BISPO);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(MOV_RAINHA);
    printf("\n");

    printf("Movimento do Cavalo:\n");

    
    for (int i = 0, j = 0; i < 1; i++) {
        
        while (j < 3) {
            j++;
            if (j < 3) {
                printf("Cima\n");
                continue; 
            }
            
            printf("Direita\n");
            break; 
        }
    }

    return 0;
}