#include <stdio.h>

int main() {
    
   const int movimentoBispo = 5;
   const int movimentoTorre = 5;
   const int movimentoRainha = 8;
   const int movimentoCavalo = 3;

   int i;

//Bispo
   printf("\nBispo\n");

   i = 0;
   while(i < movimentoBispo) {
   printf("Cima\n");
   printf("Direita\n");
   i++;
   }


//Torre
   printf("\nTorre\n");

   for(int j = 0; j < movimentoTorre; j++) {
    printf("Direita\n");

   }

//Rainha

   int k = 0;

   printf("\nRainha\n");

   do {
      printf("Esquerda\n");
      k++;

   } while (k < movimentoRainha);

//Cavalo

   printf("\nCavalo\n");

   for (int l = 0; l < 1; l++) 
   {
   int i = 0;

   while (i < 2)
{
    printf("Baixo\n");
    i++;
}
   int j = 0;
   while (j < 1)
{
    printf("Esquerda\n");
    j++;
}
   
}

   return 0;
   }

    