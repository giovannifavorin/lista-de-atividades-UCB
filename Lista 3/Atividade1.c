#include <stdio.h> 
#include <stdlib.h> 

int main (){ 
    int fatorial, N; 
    printf("Qual numero que deseja calcular seu fatorial?"); 
    scanf("%d", &N); 
    for(fatorial = 1; N > 1; N = N - 1) {
        fatorial = fatorial * N; 
        // return 0; -- Esse aqui esta sendo o seu problema
    }
    printf("\nO resultado e: %d", fatorial);  // Tem que estudar sobre "%d" - Para numericos
    return 0;
}  