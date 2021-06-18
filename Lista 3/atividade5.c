#include <stdio.h> 
#include <stdlib.h> 

int main(){
    int contador = 1;
    int NumeroF;
    int ResultadoH = 1;

    printf("Qual o numero que deseja obter a fatorial? ");
    scanf("%d", &NumeroF);
    
    while (contador <= NumeroF)
    {
        ResultadoH = contador * ResultadoH;
        contador++;
    }
    
    printf("O resultado: %d", ResultadoH);
    return 0;
}