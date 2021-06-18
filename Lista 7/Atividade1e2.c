#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	int Contador;
    int Contador2;
    int QuantidadePessoas;

	double Notas[30];
	
    printf("Quantos alunos?\n");
    scanf("%d", &QuantidadePessoas);
    fflush(stdin);

    if (QuantidadePessoas < 50)
    {
        for(Contador = 0; Contador != QuantidadePessoas; Contador++){
		printf("Informe a nota do aluno[%d]: ", Contador + 1);
		scanf("%lf", &Notas[Contador]);
	}
    printf("As notas são \n");
    for(Contador2 = 0; Contador2 != QuantidadePessoas; Contador2++){
    printf("\n%.2lf\n", Notas[Contador2]);
    }

    }
    else
        printf ("Quantidade excedente de alunos");

	return 0;
}