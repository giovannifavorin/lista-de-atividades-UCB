#include<stdio.h>
#include<stdlib.h>

int main(){

    int Maior;
    int Num1;
    int Num2;
    int Num3;

    

	printf("Por favor, insira 3 números inteiros\nPS: Entre os numeros, preencha com espaco\n  ");
	scanf("%d%d%d",&Num1, &Num2, &Num3);

	
	if(Num1>Num2 && Num1>Num3)
		Maior = Num1;
		else if(Num2>Num1 && Num2>Num3)
			Maior = Num2;
			else
				Maior = Num3;
				
    printf("\e[1;1H\e[2J");
				
	printf("O maior número é: %d ", Maior);
	
	return 0;
}
