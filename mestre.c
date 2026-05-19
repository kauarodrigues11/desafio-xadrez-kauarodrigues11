#include <stdio.h>


// Recursão - BISPO

void bispo(int n) {
    if (n == 0) return;

    printf("Cima\n");
    printf("Direita\n");

    bispo(n - 1);
}


// Recursão - TORRE

void torre(int n) {
    if (n == 0) return;

    printf("Direita\n");

    torre(n - 1);
}


// Recursão - RAINHA

void rainha(int n) {
    if (n == 0) return;

    printf("Esquerda\n");

    rainha(n - 1);
}


int main() {

   const int movimentoBispo = 5;
   const int movimentoTorre = 5;
   const int movimentoRainha = 8;

   // BISPO
   printf("\nBispo\n");
   bispo(movimentoBispo);

   // TORRE
   printf("\nTorre\n");
   torre(movimentoTorre);

   // RAINHA
   printf("\nRainha\n");
   rainha(movimentoRainha);

   // CAVALO
   printf("\nCavalo\n");

   for (int i = 0, j = 0; i < 3 && j < 3; i++, j++) {

        if (i < 2) {
            printf("Cima\n");
            continue;
        }

        for (int d = 0; d < 2; d++) {
            if (d == 1) break;
            printf("Direita\n");
        }
   }

   return 0;
}