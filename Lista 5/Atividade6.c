
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int Regiao;
    int Dia;
    int Mes;
    int Ano;

    char Repet;
	
    fflush(stdin);
    do
    {
        printf("************************************************");
	printf("\n*************     DF  TURISMO     **************");
	printf("\n************************************************");
	printf("\n\n  Seja Bem-vindo ao site da DF Turismo!\n\n  Qual será a região do país que iremos te levar?\n\n");
	printf("      MENU DE OPÇÕES      \n");
	printf("      ==============      \n");
	printf("      1 - Norte           \n");
	printf("      2 - Nordeste        \n");
	printf("      3 - Centro-Oeste    \n");
	printf("      4 - Sudeste         \n");
	printf("      5 - Sul             \n");
	printf("      0 - Sair do programa\n");
	if(scanf("%d", &Regiao) == 0);
	else{ 
		printf("\e[1;1H\e[2J");
			switch(Regiao){
				case 1: printf("\n\n\n\n\n              Região escolhida: Norte           \n\n\n\n\n"); break;
				case 2: printf("\n\n\n\n\n              Região escolhida: Nordeste        \n\n\n\n\n"); break;
				case 3: printf("\n\n\n\n\n              Região escolhida: Centro-Oeste    \n\n\n\n\n"); break;
				case 4: printf("\n\n\n\n\n              Região escolhida: Sudeste         \n\n\n\n\n"); break;
				case 5: printf("\n\n\n\n\n              Região escolhida: Sul             \n\n\n\n\n"); break;
				default:printf("\n\n\n\n\n              Região inválida!"); return 0;
			};
	}	

    printf("Qual data é melhor para a viagem?\nPS: Entre os numeros, preencha com espaco\nDia Mes Ano\n");
    scanf("%d%d%d", &Dia, &Mes, &Ano);
    fflush(stdin);

    printf("A viagem foi marcada para %d/%d/%d", Dia, Mes, Ano);

    printf("\nCaso nao deseje viajar para mais algum lugar, pressione 'N' \nDo contrario, pressione qualquer outra tecla ");
    scanf(" %c", &Repet);
    fflush(stdin);

    Repet = toupper(Repet);

    printf("\e[1;1H\e[2J");

    } while (Repet != 'N');
	
return 0;
}