#include <stdio.h> 
#include <stdlib.h>

int main(){

	int abacaxi = 0;
	int maca = 0;
	int pera = 0;
	int QuantidadeFruta = 0;
	int TipoFruta = 0;
	int QuantidadeTotal = 0;

	do{
	
		printf("Por favor, escolha uma das seguintes frutas\n 1 para abacaxi\n 2 para maca\n 3 para pera\n 4 para finalizar as compras\n");
		scanf ("%d", &TipoFruta);

		switch(TipoFruta){
			case 1:
				printf ("Quantas?");
				scanf("%d", &QuantidadeFruta);
				QuantidadeTotal = QuantidadeTotal + QuantidadeFruta;
				abacaxi += QuantidadeFruta;
			break;

			case 2:
				printf ("Quantas?");
				scanf("%d", &QuantidadeFruta);
				QuantidadeTotal = QuantidadeTotal + QuantidadeFruta;
				maca += QuantidadeFruta;
			break;

			case 3:
				printf ("Quantas?");
				scanf("%d", &QuantidadeFruta);
				QuantidadeTotal = QuantidadeTotal + QuantidadeFruta;
				pera += QuantidadeFruta;
			break;

			case 4:
				printf("\n ******************************************\n");                                                                                                                          
    			system("pause");                                                                                    
    			system("cls"); 
				printf("A quantidade de abacaxis: %d\nDe macas: %d \nDe peras: %d \nTotalizando %d frutas", abacaxi, maca, pera, QuantidadeTotal);
			break;

			case 666:
				printf ("\nINVOCASTES OS DEMONIOS QUE RESIDEM NO BANCO INFERNAL: CAIXA ECONOMICA, VC ESTA CONDENADO A ESPERAR SUA VIDA TODA PRA TER ACESSO AO DINHEIRO Q DEPOSITOU LA, ENQUANTO RECEBE UM ATENDIMENTO DIGNO DE SER INFERNAL E HUMILHANTE\n");
			break;

			default:
				printf ("\nPor favor, digite um dos valores citados");
		}
	
	} while (TipoFruta !=4);
	

	return 0;
}
