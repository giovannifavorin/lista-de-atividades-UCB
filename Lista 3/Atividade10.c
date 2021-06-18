#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int Contador = 0, NumInteiro;

    do
    {
        printf("Digite um numero inteiro: ");
        scanf("%d", &NumInteiro);
        fflush(stdin);

        Contador++;
    } while (NumInteiro >= 0 && Contador <= 100);

    printf("Total de valores lidos: %d", Contador);

    return 0;
}