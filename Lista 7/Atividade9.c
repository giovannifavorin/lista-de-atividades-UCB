#include <stdio.h>
#include <locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	int Contador;
    int Idade[100];
    int MaiorIdade = 0;
	int positionOfMaiorIdade = 0;
	int MenorIdade = 10000000;
	int positionOfMenorIdade = 0;

    double QuantPessoas;
    double SomaIdades = 0.0;
    double MediaIdades = 0.0;

	printf("Informe a quantidade de pessoas: ");
	scanf("%lf", &QuantPessoas);	

	for(Contador = 0; Contador != QuantPessoas; Contador++){
		printf("Informe a idade da pessoa %d: ",Contador+1);
		scanf("%d", &Idade[Contador]);

		SomaIdades += Idade[Contador]; 

		if(MaiorIdade < Idade[Contador]){
			MaiorIdade = Idade[Contador];
			positionOfMaiorIdade = Contador;
		}

		if(MenorIdade > Idade[Contador]){
			MenorIdade = Idade[Contador];
			positionOfMenorIdade = Contador;
		}
	}

	MediaIdades = SomaIdades / QuantPessoas;	

	printf("\nA média das idades apresentadas foi de: %.2f.\n", MediaIdades);
	printf("A pessoa mais velha tem %d anos,identificado na posição %d.\n", MaiorIdade, positionOfMaiorIdade+1);	
	printf("A pessoa mais nova tem %d anos,identificado na posição %d.\n", MenorIdade, positionOfMenorIdade+1);	

	return 0;
}