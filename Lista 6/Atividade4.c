#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	
    setlocale(LC_ALL, "Portuguese");

	int Contador;
    int Falecimentos;
    int Nascidas;
    int Meses;
    int Meses24=0;
    int Meninos=0;
	
    double PorcentagemMortos=0;
    double PorcentagemMasculinos=0;
    double Porcentagem24meses=0;
	
    char Sexo;
	
	printf("\nDigite a quantidade de crianças nascidas no tempo datado:\n");
	scanf("%d", &Nascidas);
	fflush(stdin);
	
	printf("\nDigite a quantidade de crianças que morreram prematuramente:\n");
	scanf("%d", &Falecimentos);
	fflush(stdin);
	
    for(Contador = 0; Contador != Falecimentos; Contador++){
		
		printf("Digite o sexo da %d* criança que veio a falecer:\n 'M' para menino\n 'F' para menina \n", Contador);
		scanf("%c", &Sexo);
		fflush(stdin);
        Sexo = toupper(Sexo);
		
		printf("Digite quantos meses de vida a %d* criança possuia:\n", Contador);
		scanf("\n%d", &Meses);
		fflush(stdin);
		
		printf("\33[H\33[2J");
		
		if(Sexo=='M')
		Meninos++;
		
		if(Meses>=1 && Meses<=24)
		Meses24++;
	}
	
	PorcentagemMortos = (Falecimentos * 100) / Nascidas;
	PorcentagemMasculinos = (Meninos * 100) / Nascidas;
	Porcentagem24meses = (Meses24 * 100) / Nascidas;
	
	printf("A porcentagem de crianças mortas no período calculado é de %.2f%%.\n", PorcentagemMortos);
	printf("A porcentagem de crianças masculinas mortas no período calculado é de %.2f%%.\n", PorcentagemMasculinos);
	printf("A porcentagem de crianças que morreram com idade prematura calculado é de %.2f%%.\n", Porcentagem24meses);
	
    return 0;	
}