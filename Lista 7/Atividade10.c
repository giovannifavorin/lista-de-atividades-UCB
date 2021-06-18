#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");
	
	char Nome[100];
	char Letra;

	int QuantidadeLetras = 0;
    int Contador = 0;
	
	printf("DIGITE '#' QUANDO ACABAR O NOME.\n");
	for(; Contador < 100; Contador++){
		printf("Digite a %dª letra do nome: ", 1+Contador);
		scanf("%c", &Letra);
		fflush(stdin);
		if(Letra == '#') break;
		else{
			Nome[Contador] = Letra;
			QuantidadeLetras++;
		}
	}
	
	printf("\n\n");
	for(Contador = 0; Contador < QuantidadeLetras; Contador++){
		printf("%c", Nome[Contador]);	
	}
}