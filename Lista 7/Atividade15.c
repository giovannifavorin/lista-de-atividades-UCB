#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(void){

	setlocale(LC_ALL, "Portuguese");
	
	int Total;
	int Contador = 1;

	char Letra[100];
	char Caractere;	
	
	printf("Informe o número de letras: ");
	scanf("%d", &Total);	
	fflush(stdin);
	
	for(; Contador <= Total; Contador++){
		printf("Informe a %dº letra: ", Contador);
		scanf("%c", &Letra[Contador]);
		fflush(stdin);
	}
	
	printf("Informe o caractere que deseja procurar: ");
	scanf("%c", &Caractere);
	fflush(stdin);

	for(Contador = 1; Caractere <= Total; Contador++){
		if(Letra[Contador]==Caractere)
			printf("\nO caractere pesquisado esta na %dº posição",Contador);
	}
	printf("\n\n");	
	return 0;
}