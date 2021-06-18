#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

	int Num1 = 0;
	int Num2 = 1;
	int Contador = 0;
	int Sequencia = 20;
	int Soma;

	printf("\nFibonacci e um calculo matematico\nonde uma sucessao de numeros\niniciados em 0.1, junto com os numeros seguintes\nserao sempre a soma dos dois numeros anteriores\n\n");

	do
	{

		Soma = Num1 + Num2;
		Num1 = Num2;
		Num2 = Soma;

		printf("%d\n", Soma);

		Contador++;

	} while (Contador != Sequencia);

	system("PAUSE");

	return 0;
}