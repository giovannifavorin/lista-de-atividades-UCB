#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
    int TresNumeros[3];
	int Substituir;
	
	for(int Contador = 0; Contador< 3; Contador++){
		printf("Digite o número: ");
		scanf("%d", &TresNumeros[Contador]);
	}
	
	for(int Contador2 = 0; Contador2<3;Contador2++){
		for(int Contador3 = Contador2+ 1; Contador3<3; Contador3++){
			if(TresNumeros[Contador2] > TresNumeros[Contador3]){
				Substituir = TresNumeros[Contador2];
				TresNumeros[Contador2] = TresNumeros[Contador3];
				TresNumeros[Contador3] = Substituir; 
			}
		}
	}
	
	printf("Lista de números ordenada: ");
	for(int Contador4 = 0; Contador4<2;Contador4++){
		printf("%d, ", TresNumeros[Contador4]);
	}
	printf("%d", TresNumeros[2]);

    return 0;
}