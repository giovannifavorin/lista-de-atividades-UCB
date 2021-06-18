#include <stdio.h>

int main()
{

    int Num1 = 0;
    int Num2 = 0;
    int Contador;

    do
    {
        printf("\nInforme o numero 1: \n");
        scanf("%d", &Num1);
    } while (Num1 < 0);

    do
    {
        printf("Informe o numero 2: \n");
        scanf("%d", &Num2);
    } while (Num2 < 0);

    system("cls");

    for (Contador = Num1; Contador <= Num2; Contador++)
    {
        if ((Contador % 2 != 0) && (Contador % 3 != 0) && (Contador % 5 != 0) && (Contador % 7 != 0) && (Contador % 11 != 0) || Contador == 1 || Contador == 2 || Contador == 3 || Contador == 5 || Contador == 7 || Contador == 11)
        {
            printf("%d e primo!\n", Contador);
        }
    }
    return 0;
}