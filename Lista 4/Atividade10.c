#include <stdio.h>
#include <stdlib.h>

int main()
{

    char TipoVinho;

    int QuantidadeVinhos;
    int QuantidadeVinhosTinto = 0;
    int QuantidadeVinhosRose = 0;
    int QuantidadeVinhosBranco = 0;

    float PorcentagemVinhoBranco = ((QuantidadeVinhosBranco * 100) / QuantidadeVinhos);
    float PorcentagemVinhoRose = ((QuantidadeVinhosRose * 100) / QuantidadeVinhos);
    float PorcentagemVinhoTinto = ((QuantidadeVinhosTinto * 100) / QuantidadeVinhos);

    printf("----------instrucoes----------\n\n");
    printf("Para escolher o tipo de vinhos, preencha com: \n");
    printf("R -> vinho rose\n");
    printf("T -> vinho tinto\n");
    printf("B -> vinho branco\n");
    printf("F -> finalizar a operacao\n\n");

    system("PAUSE");
    system("CLS");

    while (TipoVinho != toupper('F'))
    {
        printf("Digite o tipo do vinho: ");
        scanf("%s", &TipoVinho);

        switch (toupper(TipoVinho))
        {
        case 'T':
            QuantidadeVinhosTinto++;
            break;
        case 'B':
            QuantidadeVinhosBranco++;
            break;
        case 'R':
            QuantidadeVinhosRose++;
            break;
        case 'F':
            break;
        default:
            printf("\nTipo de vinho invalido, tente novamente\n");
        }
    }

    QuantidadeVinhos = QuantidadeVinhosBranco + QuantidadeVinhosRose + QuantidadeVinhosTinto;

    system("CLS");
    printf("\n\n--------Resultado---------\n\n");
    printf("Porcentagem de \nvinhos tintos: %.2f%% \nvinhos brancos: %.2f%% \nvinhos roses: %.2f%%\n ", PorcentagemVinhoTinto, PorcentagemVinhoBranco, PorcentagemVinhoRose);

    system("PAUSE");
    return 0;
}