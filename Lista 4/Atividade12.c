#include <stdio.h>

int main()
{

    int voto, branco = 0, nulo = 0, cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0;
    float totalVotos, porc1, porc2, porc3, porc4, porcBranco, porcNulo;

    printf("------Os votos serão computados da seguinte forma |1|- candidato 1 |2|- candidato 2 |3|- candidato 3 --------------\n");
    printf("------------------------------|4|- candidato 4 |5|- nulo |6|- branco!--------------------------------------\n");
    printf("--------------------------------- AVISO: para finalizar informe |0|!----------------------------\n");

    do
    {
        printf("Informe o voto: ");
        scanf("%d", &voto);

        if (voto == 1)
            cand1++;
        else if (voto == 2)
            cand2++;
        else if (voto == 3)
            cand3++;
        else if (voto == 4)
            cand4++;
        else if (voto == 5)
            nulo++;
        else if (voto == 6)
            branco++;
        else
            printf("Essa opção é inexistente!\n");
    } while (voto != 0);

    totalVotos = cand1 + cand2 + cand3 + cand4 + branco + nulo;

    porc1 = (cand1 / totalVotos) * 100;
    porc2 = (cand2 / totalVotos) * 100;
    porc3 = (cand3 / totalVotos) * 100;
    porc4 = (cand4 / totalVotos) * 100;
    porcNulo = (nulo / totalVotos) * 100;
    porcBranco = (branco / totalVotos) * 100;

    printf("O total de votos do candidato 1 foi %d e a porcentagem %.2f\n", cand1, porc1);
    printf("O total de votos do candidato 2 foi %d e a porcentagem %.2f\n", cand2, porc2);
    printf("O total de votos do candidato 3 foi %d e a porcentagem %.2f\n", cand3, porc3);
    printf("O total de votos do candidato 4 foi %d e a porcentagem %.2f\n", cand4, porc4);
    printf("O total de votos nulo foi %d e a porcentagem %.2f\n", nulo, porcNulo);
    printf("O total de votos branco foi %d e a porcentagem %.2f\n", branco, porcBranco);

    return 0;
}