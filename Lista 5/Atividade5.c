#include <stdio.h>
#include <ctype.h>

int main(){
	char sexo;
	
	printf("Informe a letra inicial do seu sexo `M` ou `F` ");
	scanf("%c", &sexo);
	sexo = toupper(sexo);
	
    switch (toupper(sexo)) {                                                                                                                                                    
                case 'M':                                                                                                                                                              
                    printf("Sexo Masculino!");                                                                                                                                           
                    break;                                                                                                                                                              
                case 'F':                                                                                                                                                              
                    printf("Sexo Feminino");      
                    break;                                                                                                                  
                default:                                                                              
                    printf("Coloque F ou M\n");                                                                                              
                    return 0;                                                                                                                  
    }
return 0;
}