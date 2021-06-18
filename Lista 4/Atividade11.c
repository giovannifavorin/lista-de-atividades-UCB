#include <stdio.h>
#include <ctype.h>

int main()
{

    int Contador;
    int Num;

    double NumPar;
    double TotalPar;
    double MediaPar = 0;

    printf("\n\nPara sair do programa digite \"-1\"\n");

    do
    {

        printf("DIgite um numero inteiro: ");
        scanf("%d", &Num);

        if (Num % 2 == 0 && Num != 0)
        {
            NumPar = NumPar + Num;
            TotalPar++;
        }

    } while (Num != -1);

    MediaPar = NumPar / TotalPar;

    printf("\n\nA media dos numeros pares: %.1f", MediaPar);

    return 0;
}