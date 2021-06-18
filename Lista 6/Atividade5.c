#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "Portuguese");

	double PrecoIngresso = 15;
    double Despesas = 600;
	double Lucro;
	int IngressosVendidos = 120;
	
	
	printf("+---------+----------------------+------------+---------+\n");
	printf("|  Preço  |  Ingressos vendidos  |  Despesas  |  Lucro  |\n");
	printf("+---------+----------------------+------------+---------+\n");
    do
    {
        Lucro = (PrecoIngresso * IngressosVendidos) - Despesas;
		printf("|%7.2lf  |%22i|  %10.2lf|  %7.2lf|\n", PrecoIngresso, IngressosVendidos, Despesas, Lucro);	
		IngressosVendidos = IngressosVendidos + 26;
        PrecoIngresso = PrecoIngresso - 3;
    } while (PrecoIngresso > 0);
    

	printf("+---------+----------------------+------------+---------+\n");
    return 0;
}