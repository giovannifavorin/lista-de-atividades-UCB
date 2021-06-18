#include<stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	int Contador;
	int Contador2 = 0;
	int Contador3 = 0;
	int VetorA[10];
	int VetorB[10];
	int VetorC[10][10];
	int Linha;
	int Coluna;	
	int Valor;

	for(Contador = 0; Contador < 10; Contador++){
		printf("DIGITE A POSIÇÃO DO %d* DO VETOR A: ", Contador+1);
		scanf("%d", &VetorA[Contador]);
	}
	printf("\n\n");
	for(Contador = 0; Contador < 10; Contador++){
		printf("DIGITE A POSIÇÃO DO %d* DO VETOR B: ", Contador);
		scanf("%d", &VetorB[Contador]);
	}
	printf("\n\n");
	for(; Contador2 < 10; Contador2++){
		for(; Contador3 < 10; Contador3++){
			VetorC[Contador2][Contador3] = VetorA[Contador2] + VetorB[Contador3];
		}
	}
	
	for(Linha = 0; Linha < 10; Linha++){
		printf("[");
		for(Coluna = 0; Coluna < 9; Coluna++){
			printf("%3d, ", VetorC[Linha][Coluna]);
		}
		printf("%3d]\n", VetorC[Linha][9]);
	}
	
	printf("\n\n");
	printf("PESQUISE O NÚMERO: ");
	scanf("%d", &Valor);

	for(Linha = 0; Linha < 10; Linha++){
		for(Coluna = 0; Coluna<10; Coluna++){
			if(VetorC[Linha][Coluna] == Valor){
				printf("O VALOR DIGITADO APARECE NA LINHA %d E COLUNA %d\n", Linha, Coluna);
			}
		}
	}

}