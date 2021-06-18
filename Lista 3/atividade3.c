#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>


int main (){
    int QPessoas, MenorPessoa = 100000, Altura, contador;
    char Nome[100], NomeMenorPessoa[100];

    printf("\nPasse a altura em Cm");
    printf("\nQuantas pessoas? ");
    scanf("%d", &QPessoas);
    for(contador = 1; contador <= QPessoas; contador++){
        printf("\nQual a altura da %d* pessoa: ", contador);
        scanf("%d", &Altura);
        getchar();
        printf("Qual o nome da %d* pessoa: ", contador);
        fgets(Nome, 100,  stdin);
        if(contador == 1) {
            MenorPessoa = Altura;
            strcpy(NomeMenorPessoa, Nome);
        }

        if(MenorPessoa > Altura) {
            MenorPessoa = Altura;
            strcpy(NomeMenorPessoa, Nome);
        }
    
        
        
    }

    printf("\nA Menor Altura e: %d, com o nome de: %s \n\n",MenorPessoa, NomeMenorPessoa);

    return (0);
}