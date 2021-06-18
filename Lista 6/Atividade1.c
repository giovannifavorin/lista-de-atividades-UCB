#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");
	
    int Numero;
	
	
	printf("Digite um número para descobrir todos os números pares até ele: ");
	scanf("%d", &Numero);
	
	printf("\33[H\33[2J"); 

	if(Numero > 2000){
		printf("%d excede o limite de cálculo.", Numero);
		return 0;
	}
	printf("Os números pares são:\n");
	
    for(int Contador = 0; Contador <= Numero; Contador++){
		if(Contador % 2 == 0){
			printf("%d\n", Contador);
		}
	}
	return 0;
}