#include <stdio.h>
#include <locale.h>
int main(){

	setlocale(LC_ALL, "Portuguese");

	int Contador;
    int Dados[100];
    int QuantN;
	double Soma = 0.0;	
	
    printf("Informe quantos números você deseja somar: ");
	scanf("%d", &QuantN);
	
    for(Contador = 0; Contador < QuantN; Contador++){

		printf("Informe o número [%d]: ", Contador+1);
		scanf("%d", &Dados[Contador]);
		fflush(stdin);
		Soma = Soma + Dados[Contador];  	
	}
	
    printf("Soma Final: %.1f", Soma);
	
    return 0;
}