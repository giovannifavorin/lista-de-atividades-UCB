#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

    char Letras[30];
    char Letra;
    char LetraNaPosicaoJ;

    int QuantidadeLetras = 0;
    int Contador = 0;
    int Contador2 = 0;

	printf("DIGITE '#' PARA PARAR A DIGITAÇÃO DE CARACTERES\n\n");

	for(; Contador < 30; Contador++){
		printf("Digite a %dª letra: ", Contador+1);
		scanf("%c", &Letra);
		fflush(stdin);
		
		if(Letra == '#'|| QuantidadeLetras > 30) break;
		else Letras[Contador] = Letra;
		
		QuantidadeLetras++;
	}


	for(Contador = 0; Contador < QuantidadeLetras; Contador++){
		for(Contador2 = 0; Contador2 < QuantidadeLetras; Contador2++){
			//  Caso o letras na posição i seja maior que a letras na posição j, as posições são trocadas para que o maior
			// sempre esteja no início.
			if(Letras[Contador] > Letras[Contador2]){
				LetraNaPosicaoJ = Letras[Contador2];
				Letras[Contador2] = Letras[Contador];
				Letras[Contador] = LetraNaPosicaoJ;
			}
		}
	}
	
	printf("Letras ordenadas: [");
	for(Contador = 0; Contador < QuantidadeLetras-1; Contador++){
		printf("%c, ", Letras[Contador]);
	}
	printf("%c]", Letras[QuantidadeLetras-1]);

    return 0;

}