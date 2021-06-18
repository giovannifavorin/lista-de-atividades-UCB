#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int Dia;
    int Ano;
    int Mes;

    printf("\nPor favor, coloque todas as datas por extenso \n");

    printf("Informe o dia: \n");
    scanf("%d", &Dia);

    printf("Informe o mes '01 a 12': \n");
    scanf("%d", &Mes);

    printf("Informe o ano: \n");
    scanf("%d", &Ano);

    system("pause");
    system("cls");

    switch (Mes)
    {
    case 1:

        if (Dia > 0 && Dia <= 31)
        {
            printf("%d/%d/%d e uma data valida!\n", Dia, Mes, Ano);
        }
        else
            printf("Dia invalido!\n");

        break;

    case 2:

        if ((Ano % 4 == 0) && (Ano % 100 != 0) || (Ano % 400 == 0))
        {
            if (Dia > 0 && Dia <= 29)
            {
                printf("Esse ano e bissexto!\n");
                printf("%d/%d/%d e uma data valida!\n", Dia, Mes, Ano);
            }
        }

        else if ((Ano % 4 != 0) && (Ano % 100 == 0) || (Ano % 400 != 0))
        {
            if (Dia > 0 && Dia <= 28)
            {
                printf("%d/%d/%d e uma data valida!\n", Dia, Mes, Ano);
            }
        }

        else
            printf("Dia invalido!\n");

        break;
    }

    if (Mes > 0 && Mes <= 7 && Mes != 2 && Mes != 1)
    {
        if ((Mes % 2 == 0))
        {
            if (Dia > 0 && Dia <= 30)
            {
                printf("%d/%d/%d e uma data valida!\n", Dia, Mes, Ano);
            }
        }
        else if ((Mes % 2 == 1))
        {
            if (Dia > 0 && Dia <= 31)
            {
                printf("%d/%d/%d e uma data valida!\n", Dia, Mes, Ano);
            }
        }
        else
            printf("Dia invalido!\n");
    }

    if (Mes > 0 && Mes >= 8 && Mes <= 12)
    {
        if ((Mes % 2 == 0))
        {
            if (Dia > 0 && Dia <= 31)
            {
                printf("%d/%d/%d e uma data valida!\n", Dia, Mes, Ano);
            }
        }
        else if ((Mes % 2 == 1))
        {
            if (Dia > 0 && Dia <= 30)
            {
                printf("%d/%d/%d e uma data valida!", Dia, Mes, Ano);
            }
        }
        else
            printf("Dia invalido!\n");
    }

    return 0;
}