#include <stdio.h>

// Quantidade de movimentos por peça
const int passosTorre = 5;
const int passosBispo = 5;
const int passosRainha = 8;

// ----------------- FUNÇÕES RECURSIVAS -----------------

// Torre: anda para a direita recursivamente
void torreParaDireita(int restante) {
    if (restante <= 0) return;
    printf("→ Andou para a Direita\n");
    torreParaDireita(restante - 1);
}

// Bispo: desloca-se em diagonal superior direita recursivamente
void bispoDiagonalSuperiorDireita(int restante) {
    if (restante <= 0) return;
    printf("↗ Subiu na Diagonal Direita\n");
    bispoDiagonalSuperiorDireita(restante - 1);
}

// Rainha: desloca-se para a esquerda usando recursividade
void rainhaParaEsquerda(int restante) {
    if (restante <= 0) return;
    printf("← Andou para a Esquerda\n");
    rainhaParaEsquerda(restante - 1);
}

// ----------------- BISPO USANDO LOOPS ANINHADOS -----------------

// Simulação de movimento diagonal inferior esquerda
void bispoDiagonalInferiorEsquerda(int casas) {
    printf("Bispo se move na Diagonal Inferior Esquerda:\n");
    for (int linha = 0; linha < casas; linha++) {
        for (int coluna = 0; coluna < casas; coluna++) {
            if (linha == coluna) {
                printf("↙ Passo na Diagonal\n", linha, coluna);
            }
        }
    }
}

// ----------------- CAVALO COM LOOPS COMPLEXOS -----------------

// Simulação do movimento do Cavalo em L
void cavaloMovimentoL() {
    // Um único movimento em L: 2 casas para cima, 1 para a direita
    printf("Cavalo faz movimento em L (2 cima, 1 direita):\n");
    for (int a = 0; a < 1; a++) {
        for (int b = 0; b < 1; b++) {
            printf("↑ Subiu\n");
            printf("↑ Subiu\n");
            printf("→ Direita\n");
        }
    }
}

// ----------------- FUNÇÃO PRINCIPAL -----------------

int main() {
    printf("=== Movimento da Torre ===\n");
    torreParaDireita(passosTorre);
    printf("\n");

    printf("=== Movimento do Bispo (Cima Direita) ===\n");
    bispoDiagonalSuperiorDireita(passosBispo);
    printf("\n");

    printf("=== Movimento da Rainha (Esquerda) ===\n");
    rainhaParaEsquerda(passosRainha);
    printf("\n");

    printf("=== Movimento do Bispo (Inferior Esquerda - com Loops) ===\n");
    bispoDiagonalInferiorEsquerda(passosBispo);
    printf("\n");

    printf("=== Movimento do Cavalo (em L) ===\n");
    cavaloMovimentoL();
    printf("\n");

    return 0;
}