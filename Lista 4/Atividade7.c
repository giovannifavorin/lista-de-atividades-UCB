#include <stdio.h>
#include <ctype.h>

int main()
{

    int Maior;
    int Menor;
    int Contador = 1;
    int Altura;
    int AlturaMedia;
    int Media;
    int Mulheres = 0;
    int QuantidadePessoas;

    char Sexo;

    while (Contador != 50)
    {
        printf("\nDigite a altura da %d* pessoa em cm: \n", Contador);
        scanf("%d", &Altura);

        printf("\nDigite o sexo da %d* pessoa 'F' ou 'M': \n", Contador);
        scanf("%s", &Sexo);

        Sexo = toupper(Sexo);

        if (Contador == 1)
        {
            Menor = Altura;
            Maior = Altura;
        }
        if (Menor > Altura)
            Menor = Altura;
        if (Maior < Altura)
            Maior = Altura;
        if (Sexo == 'F')
        {
            AlturaMedia = AlturaMedia + Altura;
            Mulheres++;
        }

        Contador++;
    }

    Media = AlturaMedia / Mulheres;

    printf("Iremos mostrar o resultado agora, preparado?\n");
    system("pause");
    system("cls");
    ;

    printf("\nA Menor Altura e %d\n", Menor);
    printf("\nA Maior Altura e %d\n", Maior);
    printf("\nA Media de altura das mulheres e %d\n", Media);

    return 0;
}