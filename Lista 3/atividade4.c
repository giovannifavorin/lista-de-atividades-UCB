#include <stdio.h> 
#include <stdlib.h> 

int main(){
    double contador = 1.0;
    double NumeroN;
    double ResultadoH = 0.0;

    printf("Qual a quantidade de repeticoes que deseja? ");
    scanf("%lf", &NumeroN);
    
    while (contador <= NumeroN)
    {
        ResultadoH = 1/contador + ResultadoH;
        contador++;
    }
    
    printf("O resultado: %.3lf", ResultadoH);
    return 0;
}