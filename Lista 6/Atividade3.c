#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	int Contador;
    int Altura;
    int MaiorAltura=0;
    int MenorAltura=0;
    int AlturaMulheres=0;
    int Homens=0;
    int Mulheres=0;
    int QuantidadePessoas;
	
    float MediaAlturaMulher=0;
	
    char Sexo;	
	
	do{
		printf("\nQuantas pessoas (Máximo 10) irão fazer a pesquisa:\n\n");
		fflush(stdin);
		if(scanf("%d", &QuantidadePessoas) < 1 || QuantidadePessoas > 10)
		printf("\nQuantidade inválida de pessoas\n");		
	}while(QuantidadePessoas < 1 || QuantidadePessoas > 10);
		
	for(Contador = 1; Contador <= QuantidadePessoas; Contador++){	
		printf("\nDigite o sexo 'M' ou 'F' da pessoa %d*: ", Contador);
		scanf("%s", &Sexo);
		fflush(stdin);
		
		printf("\nDigite a altura da pessoa %d*, em centímetros: ", Contador);
		scanf("%d", &Altura);
		fflush(stdin);
		
		if(Contador == 1)
		MaiorAltura = Altura;
		if(MaiorAltura < Altura)
		MaiorAltura = Altura;
		
		if(Contador==1)
		MenorAltura = Altura;
		if(MenorAltura > Altura)
		MenorAltura = Altura;

		switch (toupper(Sexo))
        {
        case 'F':
            Mulheres++;
		    AlturaMulheres = AlturaMulheres + Altura;
            break;
        
        case 'M':
            Homens++;
            break;
        default:
            break;
        }
	}

	printf("\33[H\33[2J");
	
	MediaAlturaMulher = AlturaMulheres/Mulheres;
	
	printf("\nA maior altura do grupo é %d centímetros.\n", MaiorAltura);
	printf("\nA menor altura do grupo é %d centímetros.\n", MenorAltura);
	printf("\nA média da altura das mulheres é %.1f.\n", MediaAlturaMulher);
	printf("\nO número de homens nesse grupo é %d.\n", Homens);
		
    return 0;
}