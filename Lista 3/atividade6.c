#include <stdio.h> 
#include <stdlib.h> 

int main(){
    int sexoM=0;
    int sexoF=0;
    float mediaM;
    float mediaF;
    float nota;
    char sexo;



    while (nota >= 0) {
        printf("\n Qual o sexo da pessoa? M ou F? ");
        scanf("%s", &sexo);

        printf ("\nQual foi a nota tirada ");
		scanf ("%f", &nota);
      
        if (nota >= 0 )
        {
            switch (toupper(sexo)) {
                case 'M':
                    sexoM = sexoM + 1;
                    mediaM += nota;	
                    break;
                case 'F':
                    sexoF = sexoF + 1;
                    mediaF += nota;
                    break;
                default:
                    printf("Coloque F ou M\n");
                    return;
            }
        }
        
            

            
}

    printf("\nA media de %d homens: %.2f", sexoM, mediaM);
    printf("\nA media de %d mulheres: %.2f", sexoF, mediaF);

    return 0;
}
