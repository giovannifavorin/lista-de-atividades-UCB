#include <stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");
	
	int Contador;
    int OpcaoMenu;
	int QuantidadeDiscos;

    double VetorPrecoCds[100];
    double Porcentagem = 0;
	
	printf("QUANTOS DISCOS?");
    scanf("%d", &QuantidadeDiscos);

	for(Contador = 0; Contador < QuantidadeDiscos; Contador++){
		printf("DIGITE O PRECO DO %d CD: ",Contador+1);
		scanf("%lf",&VetorPrecoCds[Contador]);
	}
	
    printf ("\n\nCOMO DESEJA REAJUSTAR OS VALORES?\n\n");

	printf("1-AUMENTAR EM 10 %% O VALOR DE TODOS OS PRODUTOS\n");
	printf("2-AUMENTAR O VALOR DE TODOS OS PRODUTOS DE ACORDO COM O PRECO DESEJADO\n");
    scanf("%d", &OpcaoMenu);
    
	switch(OpcaoMenu)
	{
	    case 1 : 
		
		for(Contador = 0;Contador < QuantidadeDiscos; Contador++){
		VetorPrecoCds[Contador] = VetorPrecoCds[Contador] * 1.1;
        printf("\nPREÇO DO PRODUTO COM DEZ PORCENTO DE AUMENTO: %.2lf\n", VetorPrecoCds[Contador]);
	    };

		break;

		case 2 : 

		printf("\nATRIBUIR AUMENTO DE:");
		scanf("%lf", &Porcentagem);

		for(Contador = 0;Contador < QuantidadeDiscos; Contador++){
		VetorPrecoCds[Contador] = (Porcentagem+100 / 100) * VetorPrecoCds[Contador];

		printf("\nPREÇO DO PRODUTO COM DEZ PORCENTO DE AUMENTO: %.2lf\n", VetorPrecoCds[Contador]);
	    }

		;break;
	}	
	return 0;
}