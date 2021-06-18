#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{

  setlocale(LC_ALL, "Portuguese");

  int Contador;
  int VetorSalario[100];
  int Maior;
  int ComparacaoMaior;
  int Menor = 1000000;

  double MediaSalario;
  double SomaSalario;
  int QuantSalario;

  printf("Serão quantas pessoas?");
  scanf("%d", &QuantSalario);

  if (QuantSalario > 100)
  {
    return 0;
  }

  for (Contador = 0; Contador < QuantSalario; Contador++)
  {
    printf("Digite o salario do %d funcionario: ", Contador + 1);
    scanf("%d", &VetorSalario[Contador]);
    SomaSalario += VetorSalario[Contador];

    if(Maior < VetorSalario[Contador])
		Maior = VetorSalario[Contador];
	if(Menor > VetorSalario[Contador])
		Menor = VetorSalario[Contador];
  }

  printf("\33[H\33[2J"); 

  MediaSalario = SomaSalario / Contador;

  printf("Média salarial: %.2lf\n", MediaSalario);
  printf("Maior salário: %d\n", Maior);
  printf("Menor salário: %d", Menor);

  return 0;
}