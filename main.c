#include <stdio.h>

// ------------------------------
// TORRE - Movimento com recursão
// ------------------------------
void mover_torre_direita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    mover_torre_direita(casas - 1);
}

// ------------------------------
// BISPO - Movimento com recursão
// ------------------------------
void mover_bispo_diagonal_recursivo(int casas) {
    if (casas == 0) return;
    printf("Cima, Direita\n");
    mover_bispo_diagonal_recursivo(casas - 1);
}

// ------------------------------
// BISPO - Movimento com loops aninhados
// ------------------------------
void mover_bispo_diagonal_loop(int casas) {
    for (int vertical = 0; vertical < casas; vertical++) {
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }
}

// ------------------------------
// RAINHA - Movimento com recursão
// ------------------------------
void mover_rainha_esquerda(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    mover_rainha_esquerda(casas - 1);
}

// ------------------------------
// CAVALO - Movimento com loops aninhados e condições
// ------------------------------
void mover_cavalo_em_L() {
    for (int dx = 1; dx <= 2; dx++) {
        for (int dy = 1; dy <= 2; dy++) {
            // Movimentos válidos em L: 2x1 ou 1x2
            if ((dx == 2 && dy == 1) || (dx == 1 && dy == 2)) {
                printf("Movimento em L: %d para cima, %d para direita\n", dx, dy);
            } else {
                // Pula movimentos inválidos
                continue;
            }
        }
    }
}

// ------------------------------
// FUNÇÃO PRINCIPAL
// ------------------------------
int main() {
    // Variável comum para número de casas
    int casas = 5;

    // Torre
    printf("\nTorre:\n");
    mover_torre_direita(casas);

    // Bispo - recursivo
    printf("\nBispo (Recursivo):\n");
    mover_bispo_diagonal_recursivo(casas);

    // Bispo - com loops aninhados
    printf("\nBispo (Loops Aninhados):\n");
    mover_bispo_diagonal_loop(casas);

    // Rainha
    printf("\nRainha:\n");
    mover_rainha_esquerda(8);

    // Cavalo
    printf("\nCavalo:\n");
    mover_cavalo_em_L();

    return 0;
}
