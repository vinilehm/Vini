#include <stdio.h>

// Move a torre para a direita N casas
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}


// Move a rainha para a esquerda N casas
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}


// Movimento diagonal usando recursividade
void moverBispoRecursivo(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Movimento diagonal usando loops aninhados (vertical e horizontal)
void moverBispoLoops(int movimentos) {
    for (int i = 0; i < movimentos; i++) { // vertical
        for (int j = 0; j < 1; j++) {      // horizontal
            printf("Cima Direita\n");
        }
    }
}


// Move o cavalo em L (duas casas para cima, uma para a direita)
void moverCavalo(int movimentos) {
    printf("Movimento do Cavalo em L:\n");
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    printf("Direita\n");
}

int main() {
    // Definindo número de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int movimentosCavalo = 3;

    printf("=== Movimento da TORRE (Recursividade) ===\n");
    moverTorre(casasTorre);

    printf("\n=== Movimento do BISPO (Recursividade) ===\n");
    moverBispoRecursivo(casasBispo);

    printf("\n=== Movimento do BISPO (Loops Aninhados) ===\n");
    moverBispoLoops(casasBispo);

    printf("\n=== Movimento da RAINHA (Recursividade) ===\n");
    moverRainha(casasRainha);

    printf("\n=== Movimento do CAVALO (Loops Complexos) ===\n");
    moverCavalo(movimentosCavalo);

    return 0;
}
