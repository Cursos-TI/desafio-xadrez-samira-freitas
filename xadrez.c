#include <stdio.h>

// ===============================
// Funções Recursivas
// ===============================

// Função recursiva da TORRE – anda para FRENTE
void moverTorre(int casas) {
    if (casas == 0) return; // caso base
    printf("A torre andou para frente\n");
    moverTorre(casas - 1); // chamada recursiva
}

// Função recursiva da RAINHA – anda para a ESQUERDA
void moverRainha(int casas) {
    if (casas == 0) return; // caso base
    printf("A rainha andou para a esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva da BISPO – com loops aninhados
void moverBispo(int casasVerticais, int casasHorizontais) {
    if (casasVerticais == 0) return; // caso base

    // Loop externo (vertical)
    for (int v = 1; v <= 1; v++) {
        // Loop interno (horizontal)
        for (int h = 1; h <= casasHorizontais; h++) {
            printf("O bispo andou uma casa na diagonal direita\n");
        }
    }

    // Chamada recursiva: anda mais uma "diagonal"
    moverBispo(casasVerticais - 1, casasHorizontais);
}

// Movimento do CAVALO – loops complexos com break e continue
void moverCavalo() {
    int movimentosVerticais = 2; // duas casas para cima
    int movimentosHorizontais = 1; // uma para a direita

    printf("Movimento do Cavalo:\n");

    for (int i = 1; i <= movimentosVerticais; i++) {
        if (i == 2) {
            printf("O cavalo andou uma casa para cima\n");
            // movimento em L
            for (int j = 1; j <= movimentosHorizontais; j++) {
                if (j == 1) {
                    printf("O cavalo andou uma casa para a direita\n");
                    break; // finaliza o L
                } else {
                    continue;
                }
            }
        } else {
            printf("O cavalo andou uma casa para cima\n");
        }
    }
}

// ===============================
// Função principal
// ===============================
int main() {
    int casasTorre = 5;
    int casasRainha = 8;
    int casasBispoVertical = 5;
    int casasBispoHorizontal = 1;

    // TORRE
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // RAINHA
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // BISPO
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispoVertical, casasBispoHorizontal);
    printf("\n");

    // CAVALO
    moverCavalo();
    printf("\n");

    return 0;
}
