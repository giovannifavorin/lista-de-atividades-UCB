#include<stdio.h>

int main(){
	char caractere;

	printf("Digite um caractere: ");
	scanf("%c", &caractere);
	
	printf("----- resultado: -------\n\nCaractere em: \n-> caractere: %c\n-> decimal: %i\n-> hexadecimal: 0x%x\n", caractere, caractere, caractere);

    return 0;
}