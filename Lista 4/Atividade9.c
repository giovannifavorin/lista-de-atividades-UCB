#include <stdio.h>

int main()
{

    int Inventado;
    int Tentativas;
    int Contador = 1;

    printf("Que numero voce imaginou?: ");
    scanf("%d", &Inventado);

    do
    {
        printf("%d* tentativa: ", Contador);
        scanf("%d", &Tentativas);

        if (Tentativas < Inventado)
            printf("\nMais\n\n");
        else if (Tentativas > Inventado)
            printf("\nMenos\n\n");
        else
            printf("\nAcertou!\n\n");

        Contador++;
    } while (Tentativas != Inventado);

    printf("\nO numero imaginado foi: %d\n", Inventado);

    return 0;
}