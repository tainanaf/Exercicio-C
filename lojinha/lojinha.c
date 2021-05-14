#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main(void) {
    setlocale(LC_ALL, "PORTUGUESE");
    int encontrouProduto = 0;
    float valor;
    float quant;
    char c[10];

    printf ("--------------------------------------------------EMPORIO AMARAL--------------------------------------------------\n");
    do {
        printf ("--Qual produto deseja: ");
        gets(c);
        if (strcmp(c, "subzero") == 0) {
            printf ("--Valor: $3,90");
            valor = 3.90;
            encontrouProduto = 1;

        } else if(strcmp(c,  "skol") == 0) {
            printf ("--Valor: $3,50");
            valor = 3.50;
            encontrouProduto = 1;

        } else if(strcmp(c,  "budweiser") == 0) {
            printf ("--Valor: $4,00");
            valor = 4.00;
            encontrouProduto = 1;

        } else if(strcmp(c,  "crystal") == 0) {
            printf ("--Valor: $3,00");
            valor = 3.00;
            encontrouProduto = 1;

        }  else {
            printf ("not faund\n");

        }


    } while (encontrouProduto == 0);
    do{
        printf ("\n--Quantidade: ");
        scanf ("%f", &quant);

        if (quant < 1){
        printf ("\n--NotFound");

         }else {
            printf ("--Valor total da compra: %.2f", quant * valor);

        }

    }while ( quant < 1);



     printf ("\n--------------------------------------------------OBRIGADO POR COMPRAR CONOSCO!-----------------------------------------");





    return 0;
}
