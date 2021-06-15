#include<stdio.h>
#include<ctype.h>

int main(){
	
	float Percentual;
    float  Calculo;
	char Repet;
	
	do{
	
	printf("Informe o percentual desejado: ");
	scanf("%f", &Percentual);
	fflush(stdin);
	
	Calculo = 555*(Percentual/100);
	
	printf("\nValor calculado: %.1f\n", Calculo);
	
	printf("\nCaso deseje encerrar, pressione 'N' \nDo contrario, pressione qualquer outra tecla ");
	scanf("%c", &Repet);
	
	Repet = toupper(Repet);

    printf("\e[1;1H\e[2J");
	
	}while(Repet != 'N');

return 0;
}