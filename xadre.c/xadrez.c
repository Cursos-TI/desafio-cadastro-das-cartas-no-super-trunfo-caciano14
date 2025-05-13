#include <stdio.h>

/*
 * Simula o movimento de peças de xadrez utilizando estruturas de repetição:
 * Torre: movimento para a direita (utiliza for)
 * Bispo: movimento na diagonal superior direita (utiliza while)
 * Rainha: movimento para a esquerda (utiliza do-while)
 */

int main() {
    int i;

    // Movimento da TORRE - 5 casas para a direita usando FOR
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (i = 1; i <= 5; i++) {
        printf("Passo %d: Direita\n", i);
    }

    // Movimento do BISPO - 5 casas na diagonal superior direita usando WHILE
    printf("\nMovimento do Bispo (5 casas na diagonal - Cima Direita):\n");
    i = 1;
    while (i <= 5) {
        printf("Passo %d: Cima Direita\n", i);
        i++;
    }

    // Movimento da RAINHA - 8 casas para a esquerda usando DO-WHILE
    printf("\nMovimento da Rainha (8 casas para a esquerda):\n");
    i = 1;
    do {
        printf("Passo %d: Esquerda\n", i);
        i++;
    } while (i <= 8);

    return 0;
}
