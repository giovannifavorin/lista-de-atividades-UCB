#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "pt_BR.UTF-8");


    double Salarios[102];
    double Maior = 0;
    double Menor = 0;

    int Contador = 1;
    int Matriculas[102];
    int QuantidadePessoas;

    printf("Quantos funcionários?");
    scanf("%d", &QuantidadePessoas);

    QuantidadePessoas = QuantidadePessoas + 1;

    do
    {
        printf("DIGITE A %dº MATRÍCULA: ", Contador);
        scanf("%d", &Matriculas[Contador]);
        fflush(stdin);

        printf("DIGITE O %dº SALÁRIO: ", Contador);
        scanf("%lf", &Salarios[Contador]);
        fflush(stdin);

        if (Salarios[Contador] > Maior)
        {
            Maior = Salarios[Contador];
        }

        Contador++;

    } while (Contador != QuantidadePessoas);

    Menor = Salarios[1];
    Contador = 1;

    do
    {
        if (Salarios[Contador] < Menor)
            Menor = Salarios[Contador];

        
        Contador++;

    } while (Contador != QuantidadePessoas);

    Contador = 1;

    do
    {
        printf("MATRÍCULA: %d // SALÁRIO R$:%.2f\n", Matriculas[Contador], Salarios[Contador]);

        
        Contador++;

    } while (Contador != QuantidadePessoas);

    printf("O MAIOR SALÁRIO É: R$:%.2f\n", Maior);
    printf("O MENOR SALÁRIO É: R$:%.2f\n", Menor);

    return 0;
}