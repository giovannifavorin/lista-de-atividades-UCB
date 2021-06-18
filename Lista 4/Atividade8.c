#include <stdio.h>
#include <stdlib.h>

int main()
{

    double AnacletoAltura = 1.50;
    double FelisbertoAltura = 1.10;
    double CrescimentoAnacleto = 0.2;
    double CrescimentoFelisberto = 0.3;

    int Anos = 0;

    while (AnacletoAltura >= FelisbertoAltura)
    {
        AnacletoAltura += CrescimentoAnacleto;
        FelisbertoAltura += CrescimentoFelisberto;
        Anos++;
    }

    printf("\n\nFelisberto (%.2fm) sera maior que Anacleto (%.2fm) em %d anos de crescimento.", FelisbertoAltura, AnacletoAltura, Anos);

    return 0;
}