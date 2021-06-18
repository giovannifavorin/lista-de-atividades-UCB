
#include <stdio.h> 
#include <stdlib.h> 

int main (){
    int N1, N2, R = 0, semiR;
    printf ("Qual sera seu primeiro valor?\n");
    scanf("%d", &N1); 
    
    printf ("Qual sera seu segundo valor?\n");
    scanf("%d", &N2); 

    semiR = N1 * N2;
    R = N1 + N2;

    if (N1 + N2 != semiR)
     R++;

       printf("\nO resultado e: %d\n", R);
       printf ("O primeiro valor: %d, quando multiplicado pelo segundo: %d resulta em = %d\n", N1, N2, R);
      
     return 0;
}
