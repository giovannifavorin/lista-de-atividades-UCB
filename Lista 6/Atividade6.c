#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	
    setlocale(LC_ALL, "Portuguese");
	
    int Tamanho;
	char Opcao;
    char NumeroDigitado[1000];
	
	do{
		do{
			printf("Digite um número inteiro positivo, que gostaria de saber quantos dígitos possui:\n");
			fgets(NumeroDigitado, 1000, stdin);
			fflush(stdin);
	
			if(NumeroDigitado<=0)
				printf("Apenas números inteiros positivos!\n");
				
			printf("\33[H\33[2J"); 

		}while(NumeroDigitado<=0);
	
		Tamanho = strlen(NumeroDigitado) - 1;
	
		printf("O número escolhido foi %s.\n", NumeroDigitado);
		printf("\nPossui %d dígitos.\n", Tamanho);
	
		printf("\nCaso não queira descobrir a quantidade de algarismos de mais algum número pressione \n'N'\n");
		scanf("%c", &Opcao);
		fflush(stdin);
		
		Opcao = toupper(Opcao);
		
		printf("\33[H\33[2J"); 

	
	}while(Opcao != 'N');
	
    return 0;	
}