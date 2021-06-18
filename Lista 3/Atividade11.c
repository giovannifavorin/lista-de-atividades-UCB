#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int Contador = 0;
    int Numero = 1;
    int Jurados = 0;
    int ListaJurado = 1;
    int Nota1 = 0;
    int Nota2 = 0;
    int Nota3 = 0;

    char Participante1[100];
    char Participante2[100];
    char Participante3[100];

    printf("Digite o nome do 1* participante: ");
    fgets(Participante1, 100, stdin);
    printf("Digite o nome do 2* participante: ");
    fgets(Participante2, 100, stdin);
    printf("Digite o nome do 3* participante: ");
    fgets(Participante3, 100, stdin);

    printf("Quantos jurados serao responsaveis por dar a pontuacao? ");
    scanf("%d", &Jurados);

    printf("O valor das notas devem ser entre 0 e 100 \n");
    do
    {
        printf("\n%d* jurado\n", ListaJurado);

        printf("\nNota do primeiro participante %s \n", Participante1);
        scanf("%d", &Nota1);
        if (Nota1 < 0 && Nota1 > 100)
        {
            printf("Corrija a nota\n");
            scanf("%d", &Nota1);
        }

        printf("\nNota do segundo participante %s \n", Participante2);
        scanf("%d", &Nota2);
        while (Nota2 < 0 && Nota2 > 100)
        {
            printf("Corrija a nota\n");
            scanf("%d", &Nota2);
        }

        printf("\nNota do terceiro participante %s \n", Participante3);
        scanf("%d", &Nota3);
        while (Nota3 < 0 && Nota3 > 100)
        {
            printf("Corrija a nota\n");
            scanf("%d", &Nota3);
        }

        ListaJurado = ListaJurado + 1;

        system("pause");
        system("cls");

        if (Jurados > 1)
        {
            Nota1 = Nota1 + Nota1;
            Nota2 = Nota2 + Nota2;
            Nota3 = Nota3 + Nota3;
        }
        Contador++;
    } while (Contador != Jurados);

    printf("\nNota do participante %s: %d\n", Participante1, Nota1);
    printf("Nota do participante %s: %d\n", Participante2, Nota2);
    printf("Nota do participante %s: %d\n", Participante3, Nota3);

    if (Nota1 > Nota2 && Nota1 > Nota3)
    {
        printf("Vencedor do concurso: %s\nPontuaçao: %d\n", Participante1, Nota1);
    }
    else if (Nota2 > Nota1 && Nota2 > Nota3)
    {
        printf("Vencedor do concurso: %s\nPontuaçao: %d\n", Participante2, Nota2);
    }
    else if (Nota3 > Nota1 && Nota3 > Nota2)
    {
        printf("Vencedor do concurso: %s\nPontuaçao: %d\n", Participante3, Nota3);
    }
    else
        printf("Parabens, deu empate\n");
    return 0;
}