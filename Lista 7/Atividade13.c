#include<stdio.h>
#include<locale.h>
#include<string.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	int CaracteresEmBranco = 0;
	int CaracteresA = 0;
	int Caracteresa = 0;
	int Contador;
	int Contador2;
	int QuantidadeVezesRepetiu = 0;
	int QuantidadeDoQueMaisSeRepetiu = 0;

	char Par[2];
	char Par2[2];
	char Frase[80];
	char ParQueMaisSeRepetiu[2];
	
	printf("Escreva a frase: ");
	fgets(Frase, 80, stdin);


	printf("%s", Frase);
	int TamanhoFrase = strlen(Frase);
	printf("Tamanho da frase: %d \n\n", TamanhoFrase);

	for(Contador = 0; Contador < TamanhoFrase; Contador++){

		printf("Contador: %d \n\n", Contador);
		switch(Frase[Contador]){
			case ' ': 
				CaracteresEmBranco++; 
				break;
			case 'A': 
				CaracteresA++; 
				break;
			case 'a': 
				Caracteresa++; 
				break;
		}
	}	

	for(Contador = 0; Contador < TamanhoFrase; Contador++){
		QuantidadeVezesRepetiu = 0;
		Par[0] = Frase[Contador];
		Par[1] = Frase[Contador+1];
		for(Contador2 = 0; Contador2 < TamanhoFrase; Contador2++){
			Par2[0] = Frase[Contador2];
			Par2[1] = Frase[Contador2+1];
			if(Par[0] == Par2 [0] && Par[1] == Par2[1]) QuantidadeVezesRepetiu++;
		}
		
		if(QuantidadeVezesRepetiu > QuantidadeDoQueMaisSeRepetiu) {
			QuantidadeDoQueMaisSeRepetiu = QuantidadeVezesRepetiu;
			strcpy(ParQueMaisSeRepetiu, Par);
		}
	}
	
	printf("+----- RESULTADO ------+\n\n");
	printf("Existem, nessa frase:\n"); 
	printf("-> %i caractere(s) em branco\n", CaracteresEmBranco);
	printf("-> %i caractere(s) 'A'\n", CaracteresA);
	printf("-> %i caractere(s) 'a'\n", Caracteresa);
	printf("-> O par de caracteres que mais se repetiu foi %c%c\n", ParQueMaisSeRepetiu[0], ParQueMaisSeRepetiu[1]);
	printf("|-> esse par se repetiu %i vezes", QuantidadeDoQueMaisSeRepetiu);
	
	return 0;	
}