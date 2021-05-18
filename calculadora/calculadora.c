#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int limite = 5;
    int valor[limite], i, soma = 0;

    for (i = 0; i < limite; i++){
        printf ("\ndigite o valor: ");
        scanf (" %d", &valor[i]);
        soma += valor[i];
    }
    printf ("a soma de todos os numeros e: %d\n", soma);

    soma = valor[0];
    for ( i = 1; i < limite; i++){
         printf("\n %d + %d = %d", soma, valor[i], soma + valor[i]);
         soma += valor[i];
    }


    return 0;
}
