#include<stdio.h>
#include<locale.h>

int main(){
	
    setlocale(LC_ALL, "Portuguese");
	
	char Letras[30];
	char Letra;
	int ContadorLetras = 0;

	printf("Digite o próximo caracter (aperte '.' para terminar): ");
	for(int Contador = 0; Contador != 30; Contador++){
		
		scanf("%c", &Letra);
		ContadorLetras++;
		if(Letra == '.') break;
			else Letras[Contador] = Letra;
		
		printf("-> ");
		
	}
	
	printf("\n\n");
	for(int Contador2 = ContadorLetras; Contador2 != 0; Contador2--)
		printf("%c", Letras[Contador2]);
	
    return 0;
}