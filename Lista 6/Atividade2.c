#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){

	setlocale(LC_ALL,"Portuguese"); 

	long long numero,contador=1,fatorial=1;

		printf("Informe o número desejado para encontrar valor fatorial: ");
		if(scanf("%lld",&numero)==0){
			fatorial=1;
		}
		else{
			while(contador<=numero){
				fatorial=contador*fatorial; 
				contador++;
			}
		}		
	
    printf("\33[H\33[2J"); 
		
    printf("O valor fatorial do número %lld informado é: %lld.\n",numero,fatorial);
return 0;
}