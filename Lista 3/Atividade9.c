#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int Idade = 0;
    int MaiorIdade = 0;
    int TotalPessoas = 1;
    int SexoM = 0;
    int SexoF = 0;

    char Sexo;
    char NomeLoira[100];
    char CorOlhos[100];
    char CorCabelos[100];

    double Porcentagem = 0;
    double PorcentagemH = 0;
    double PorcentagemF = 0;
    double MulheresLoiraOlhosVerdes = 0;

    do
    {
        printf("\nDigite o sexo da %d* pessoa 'F' ou 'M': ", TotalPessoas);
        scanf("%s", &Sexo);
        fflush(stdin);

        Sexo = toupper(Sexo);

        printf("\nDigite a cor dos olhos da %d* pessoa (azuis, verdes, castanhos ou pretos): ", TotalPessoas);
        fgets(CorOlhos, 100, stdin);
        fflush(stdin);

        switch (toupper(Sexo))
        {
        case 'M':
            SexoM = SexoM + 1;
            break;
        case 'F':
            SexoF = SexoF + 1;
            break;
        default:
            printf("Coloque F ou M\n");
            return;
        }

        printf("\nDigite a cor dos cabelos da %d* pessoa (loiros, castanhos ou pretos): ", TotalPessoas);
        fgets(CorCabelos, 100, stdin);
        fflush(stdin);

        printf("\nDigite a idade da %d* pessoa: ", TotalPessoas);
        scanf("%d", &Idade);
        fflush(stdin);

        if ((Idade >= 18 || Idade <= 35) && Sexo == 'F' && strcmp(CorOlhos, "verdes") == 1 && strcmp(CorCabelos, "loiros") == 1)
        {
            MulheresLoiraOlhosVerdes++;
            getchar();
            printf("Qual o nome dessa pessoa? ");
            fgets(NomeLoira, 100, stdin);
        }

        if (TotalPessoas == 1)
            MaiorIdade = Idade;
        if (MaiorIdade < Idade)
            MaiorIdade = Idade;

        TotalPessoas++;
    } while (Idade >= 0);

    Porcentagem = (MulheresLoiraOlhosVerdes / TotalPessoas) * 100;
    PorcentagemH = (SexoM / TotalPessoas) * 100;
    PorcentagemF = (SexoF / TotalPessoas) * 100;

    system("pause");
    system("cls");

    printf("\nA maior idade dos habitantes pesquisados e: %d \nA porcentagem de individuos do sexo feminino cuja idade esta entre 18 e 35 anos e que tenham olhos verdes e cabelos loiros é: %.1f \nO nome dessa pessoa e: %s\nE a Quantidade de: \nHomens: %d \nMulheres: %d\nUma porcentagem de: \n%.1lf Homens \n%.1lf Mulheres", MaiorIdade, Porcentagem, NomeLoira, SexoM, SexoF, PorcentagemH, PorcentagemF);

    return 0;
}