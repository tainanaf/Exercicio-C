#include <stdio.h>
#include <stdlib.h>


int main() {
    int vetor[5], i, impar = 0, mostrar[5];

    for (i = 0; i < 5; i++) {
        printf ("escolha um numero :\n");
        scanf ("%d", &vetor[i]);

        if ( vetor[i] % 2 != 0) {
            mostrar[impar] = vetor[i];
            impar++;
        }
    }
    printf(" \ntotal de numeros impares : %d:\n", impar);
    printf (" sao eles ");

    for (i = 0; i < impar ; i++) {
        printf (" %d", mostrar[i]);
    }

    return 0;
}
