#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int Dia;
    int Mes;
    int SignoDoMes;
    char Signo[100];

    printf("\nDigite um dia: \n");
    scanf("%d", &Dia);
    if (Dia > 31)
    {
        printf("Dia invalido \n");
        return 0;
    }

    printf("Digite um mes: \n");
    scanf("%d", &Mes);
    if (Mes > 12)
    {
        printf("Mes invalido \n");
        return 0;
    }

    if (Dia <= 19)
        SignoDoMes = 1;
    else
        SignoDoMes = 2;

    if (SignoDoMes == 1)
    {
        switch (Mes)
        {
        case 1:
            strcpy(Signo, "capricornio");
            break;
        case 2:
            strcpy(Signo, "aquario");
            break;
        case 3:
            strcpy(Signo, "peixes\n");
            break;
        case 4:
            strcpy(Signo, "aries\n");
            break;
        case 5:
            strcpy(Signo, "touro\n");
            break;
        case 6:
            strcpy(Signo, "gemeos\n");
            break;
        case 7:
            strcpy(Signo, "cancer\n");
            break;
        case 8:
            strcpy(Signo, "leao\n");
            break;
        case 9:
            strcpy(Signo, "virgem\n");
            break;
        case 10:
            strcpy(Signo, "libra\n");
            break;
        case 11:
            strcpy(Signo, "escorpeao\n");
            break;
        case 12:
            strcpy(Signo, "sagitario\n");
            break;
        }
    }
    else
    {
        switch (Mes)
        {
        case 1:
            strcpy(Signo, "aquario\n");
            break;
        case 2:
            strcpy(Signo, "peixes\n");
            break;
        case 3:
            strcpy(Signo, "aries\n");
            break;
        case 4:
            strcpy(Signo, "touro\n");
            break;
        case 5:
            strcpy(Signo, "gemeos\n");
            break;
        case 6:
            strcpy(Signo, "cancer\n");
            break;
        case 7:
            strcpy(Signo, "leao\n");
            break;
        case 8:
            strcpy(Signo, "virgem\n");
            break;
        case 9:
            strcpy(Signo, "libra\n");
            break;
        case 10:
            strcpy(Signo, "escorpeao\n");
            break;
        case 11:
            strcpy(Signo, "sagitario\n");
            break;
        case 12:
            strcpy(Signo, "capricornio\n");
            break;
        }
    }

    printf("O seu signo e: \n%s\n", Signo);
}