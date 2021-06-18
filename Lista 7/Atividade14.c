#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	int Contador;
	int Contador2;
	int Contador3 = 0;
	int Contador4;
	int QuantNotas;
	int Notas[80];
	int NotasRepetidas[80];
	int FreqNotas[80];
	
	printf("Informe a quantidade de notas: ");
	scanf("%d", &QuantNotas);
	
	for(Contador = 0; Contador < QuantNotas; Contador++){
		do{
			printf("Informe a nota de |0| a |10|: ");
			scanf("%d", &Notas[Contador]);
			if (Notas[Contador] < 0 || Notas[Contador] > 10)
			{
				return 0;
			}
			
		}while(Notas[Contador] < 0 || Notas[Contador] > 10);	
	}
	for(Contador = 0; Contador < QuantNotas; Contador++){
		for(Contador2 = 0; Contador2 < QuantNotas; Contador2++){
			if(Notas[Contador] == Notas[Contador2]){
				NotasRepetidas[Contador3] = Notas[Contador];
				Contador3++;
				for (Contador4 = 0; Contador4 < Contador3; Contador4++)
				{
					if (NotasRepetidas[Contador4] == NotasRepetidas[Contador4 + 1]) 
						Contador3--; 
				}
			}
				
		}
	}
	for(Contador = 0; Contador < Contador3; Contador++){
		FreqNotas[Contador] = 0;
		for(Contador2 = 0; Contador2 < QuantNotas; Contador2++){
			if(NotasRepetidas[Contador] == Notas[Contador]){
				FreqNotas[Contador] += 1;
			}
		}
	}
	printf("\n");
	for(Contador = 0; Contador < Contador3; Contador++){
		printf("A LETRA %d APARECEU %d VEZ/VEZES!\n", NotasRepetidas[Contador], FreqNotas[Contador]);
	}
	return 0;
}