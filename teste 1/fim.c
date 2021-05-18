#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[5], i, impar = 0, soma = 0, par = 0, somapar;


    for( i = 0; i < 5; i++){
        printf("\nEscolha um numero:");
        scanf (" %d" , &vetor[i]);
            if( vetor[i] % 2 !=  0){
                impar++;
            }
    }

    printf("\ntotal de numeros impares: %d\n", impar);
    printf ("Sao eles: ");


    for( i = 0; i < 5; i++){
            if ( vetor[i] % 2 !=  0){
                printf(" %d ", vetor[i]);
                soma = vetor[i] + soma;
            }
        }
    printf("\nSoma deles : %d \n", soma);
    printf("=============================\n");
    printf("\nNumeros pares: ");
    for ( i = 0; i < 5; i++){

                    if (vetor[i] % 2 == 0){
                        printf(" %d ", vetor[i]);
                        par++;
                        somapar = vetor[i] + somapar;
                    }
               }
    printf("\nTotal de numeros pares:%d ", par);
    printf("\nSoma deles: %d\n", somapar);


    return 0;
}
