#include <stdio.h>

int main() {
    // Torre: deslocamento horizontal para a direita em 5 passos
    // Estrutura de repetição: for (ideal para contagens definidas)
    printf("Torre se move 5 casas para a direita:\n");
    for (int passo = 0; passo < 5; passo++) {
        printf("-> Direita\n");
    }

    printf("\n");

    // Bispo: deslocamento diagonal (cima e direita) em 5 passos
    // Estrutura de repetição: while (ideal quando a condição pode mudar)
    printf("Bispo se move 5 casas na diagonal superior direita:\n");
    int contador = 0;
    while (contador < 5) {
        printf("\↗ Diagonal Cima-Direita\n");
        contador++;
    }

    printf("\n");

    // Rainha: deslocamento horizontal para a esquerda em 8 passos
    // Estrutura de repetição: do-while (executa pelo menos uma vez)
    printf("Rainha se move 8 casas para a esquerda:\n");
    int passos = 0;
    do {
        printf("<- Esquerda\n");
        passos++;
    } while (passos < 8);

    printf("\n");

    // Cavalo: movimento em “L” (2 para baixo e 1 para a esquerda)
    // Estruturas combinadas: for e while
    printf("Cavalo se move em L: duas casas para baixo e uma para a esquerda:\n");

    // Primeiro: deslocamento vertical (baixo)
    for (int i = 0; i < 2; i++) {
        printf("↓ Baixo\n");
    }

    // Depois: deslocamento horizontal (esquerda)
    int esquerda = 0;
    while (esquerda < 1) {
        printf("← Esquerda\n");
        esquerda++;
    }

    return 0;
}