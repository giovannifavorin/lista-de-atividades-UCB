#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("\n\n        Probabilidade de 2 dados somarem 7          \n\n");

    int Dado1;
    int Dado2;
    int Possibilidades;

    for (Dado1 = 1; Dado1 < 7; Dado1++)
    {
        for (Dado2 = 1; Dado2 < 7; Dado2++)
        {
            if (Dado1 + Dado2 == 7)
            {
                printf("Se um dos dados for %i e o outro for %i, a soma sera \n----7----\n\n", Dado1, Dado2);
                Possibilidades++;
            }
        }
    }
    printf("\n\nPortanto o numero de possibilidades e: %i", Possibilidades);
    printf("\n\n");

    system("PAUSE");
    return 0;
}