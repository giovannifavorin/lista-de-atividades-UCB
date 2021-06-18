#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<ctype.h>

int main(){

	setlocale(LC_ALL, "Portuguese");
	
	int Voto;
	int VotosTotais = 0;
	int VotosPele = 0;
	int VotosMaradona = 0;
	int VotosBranco = 0;
	int VotosAnulado = 0;
	
    char Confirma;
	char Acabou;
	
	printf("-------------------------------------------\n");
	printf("===> Melhor jogador de todos os tempos <===\n");
	printf("-------------------------------------------\n\n");
    printf("25 para Pelé\n33 para Maradona\n0 para nulo\n\n");
	while( Acabou != 'S'){
		printf("______________________\n");
		printf("eleitor nº%d\n", VotosTotais+1);
		printf("Digite o seu voto: \n");
		printf("|=> ");
		scanf("%d", &Voto);
		fflush(stdin);
		
		switch(Voto){
			case 25: printf("Voto para o Pelé"); break;
			case 33: printf("Voto para o Maradona"); break;
			case 0: printf("Voto em branco"); break;
			default: printf("Voto anulado"); break;
		}
		
		printf("\n\nConfirma seu voto? 'S' ou 'N' ");
		scanf("%c", &Confirma);
		fflush(stdin);
		if(toupper(Confirma) == 'S'){
			switch(Voto){
				case 25: VotosPele++; break;
				case 33: VotosMaradona++; break;
				case 0: VotosBranco++; break;
				default: VotosAnulado++; break;
			} 
		} else continue;
		
		VotosTotais++;
		printf("Acabou a eleição? S -> sim \nqualquer outro dígito-> não: ");
		scanf("%c", &Acabou);
		if(toupper(Acabou) == 'S') break;
        
        
	}
	printf("\33[H\33[2J"); 

	printf("---------- Resultado -------------\n\n");
	printf("Votos do Pelé: %i\n",VotosPele);
	printf("Votos do Maradona: %i\n", VotosMaradona);
	printf("Votos em branco: %i\n", VotosBranco);
	printf("Votos anulados: %i\n", VotosAnulado);
	if(VotosMaradona != VotosPele){
		printf("E o vencedor é: ");
		if(VotosMaradona > VotosPele) printf("Maradona");
			else printf("Pelé");
	} else printf("O resultado é: empate!");

    return 0;
}