#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	int QuantN;
    int QuantR=0;
    int NumR;
    int Num[80];
    int Contador;
	
	printf("Informe quantos números serão lidos: ");
	scanf("%d",&QuantN);	
	
    QuantN = QuantN + 1;

    for(Contador = 1; Contador != QuantN; Contador++){
		printf("Informe o número %d: ",Contador);
		scanf("%d",&Num[Contador]);
	}
	
    printf("Qual número você deseja saber a repetição? ");
	scanf("%d",&NumR);

    for(Contador = 1; Contador <= QuantN;Contador++){
		if(Num[Contador]==NumR)
			QuantR++;
	}

	printf("\33[H\33[2J"); 

	printf("O número %d repetiu %d vezes.\nNas posições:\n",NumR,QuantR);
	
    for(Contador = 1; Contador != QuantN; Contador++){
		if(Num[Contador] == NumR)
			printf("[%d]\t", Contador);
	}	

	return 0;
}