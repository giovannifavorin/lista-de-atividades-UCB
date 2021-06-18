#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int Total1 = 0;
    int Total2 = 0;
    int Total3 = 0;
    int Ouro1 = 0;
    int Ouro2 = 0;
    int Ouro3 = 0;
    int Prata1 = 0;
    int Prata2 = 0;
    int Prata3 = 0;
    int Bronze1 = 0;
    int Bronze2 = 0;
    int Bronze3 = 0;
    char Nome1[100];
    char Nome2[100];
    char Nome3[100];

    printf("\nDigite o pais da equipe 1: \n");
    fgets(Nome1, 100, stdin);

    printf("\nQuantas medalhas de ouro esse pais recebeu? \n");
    scanf("%d", &Ouro1);
    printf("Quantas medalhas de prata esse pais recebeu? \n");
    scanf("%d", &Prata1);
    printf("Quantas medalhas de bronze esse pais recebeu? \n");
    scanf("%d", &Bronze1);

    getchar();
    printf("\nDigite o pais da equipe 2: \n");
    fgets(Nome2, 100, stdin);

    printf("\nQuantas medalhas de ouro esse pais recebeu? \n");
    scanf("%d", &Ouro2);
    printf("Quantas medalhas de prata esse pais recebeu? \n");
    scanf("%d", &Prata2);
    printf("Quantas medalhas de bronze esse pais recebeu? \n");
    scanf("%d", &Bronze2);

    getchar();
    printf("\nDigite o pais da equipe 3: \n");
    fgets(Nome3, 100, stdin);

    printf("\nQuantas medalhas de ouro esse pais recebeu? \n");
    scanf("%d", &Ouro3);
    printf("Quantas medalhas de prata esse pais recebeu? \n");
    scanf("%d", &Prata3);
    printf("Quantas medalhas de bronze esse pais recebeu? \n");
    scanf("%d", &Bronze3);

    Total1 = 3 * Ouro1 + 2 * Prata1 + 1 * Bronze1;
    Total2 = 3 * Ouro2 + 2 * Prata2 + 1 * Bronze2;
    Total3 = 3 * Ouro3 + 2 * Prata3 + 1 * Bronze3;

    printf("-\nOs vencedores\n-");
    system("\npause\n");
    system("cls");

    if (Total1 > Total2 && Total1 > Total3 && Total2 > Total3)
    {
        printf("\nO 1* lugar e do pais %s com %d medalhas", Nome1, Total1);
        printf("\nO 2* lugar e do pais %s com %d medalhas", Nome2, Total2);
        printf("\nO 3* lugar e do pais %s com %d medalhas", Nome3, Total3);
    }
    else if (Total1 > Total2 && Total1 > Total3 && Total3 > Total2)
    {
        printf("\nO 1* lugar e do pais %s com %d medalhas", Nome1, Total1);
        printf("\nO 2* lugar e do pais %s com %d medalhas", Nome3, Total3);
        printf("\nO 3* lugar e do pais %s com %d medalhas", Nome2, Total2);
    }
    else if (Total2 > Total1 && Total2 > Total3 && Total1 > Total3)
    {
        printf("\nO 1* lugar e do pais %s com %d medalhas", Nome2, Total2);
        printf("\nO 2* lugar e do pais %s com %d medalhas", Nome1, Total1);
        printf("\nO 3* lugar e do pais %s com %d medalhas", Nome3, Total3);
    }
    else if (Total2 > Total1 && Total2 > Total3 && Total3 > Total1)
    {
        printf("\nO 1* lugar e do pais %s com %d medalhas", Nome2, Total2);
        printf("\nO 2* lugar e do pais %s com %d medalhas", Nome3, Total3);
        printf("\nO 3* lugar e do pais %s com %d medalhas", Nome1, Total1);
    }
    else if (Total3 > Total2 && Total3 > Total1 && Total2 > Total1)
    {
        printf("\nO 1* lugar e do pais %s com %d medalhas", Nome3, Total3);
        printf("\nO 2* lugar e do pais %s com %d medalhas", Nome2, Total2);
        printf("\nO 3* lugar e do pais %s com %d medalhas", Nome1, Total1);
    }
    else
    {
        printf("\nO 1* lugar e do pais %s com %d medalhas", Nome3, Total3);
        printf("\nO 2* lugar e do pais %s com %d medalhas", Nome1, Total1);
        printf("\nO 3* lugar e do pais %s com %d medalhas", Nome2, Total2);
    }

    return 0;
}