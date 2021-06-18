#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

  int Movel;
  char Repet;

  fflush(stdin);
  do
  {
    printf("Digite o numero do movel que deseja:\n1-cadeira\n2-mesa de computador\n3-estante de livros\n4-mesa de impressora\n5-estante de CD\n");
    if (scanf("%d", &Movel) < 1 || Movel > 5)
    {
      printf("Movel indisponivel no momento.\n");
    } 
    else
    {
      printf("Movel solicitado com sucesso.\n");
    }

    printf("\nCaso deseje encerrar, pressione 'N' \nDo contrario, pressione qualquer outra tecla ");
    scanf(" %c", &Repet);

    Repet = toupper(Repet);

    printf("\e[1;1H\e[2J");

  } while (Repet != 'N');

  return 0;
}