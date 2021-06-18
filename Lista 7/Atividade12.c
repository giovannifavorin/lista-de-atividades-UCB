#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include <stdbool.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int MatriculaFuncional[50];
	int MesesTrabalho[50];
	int Matricula;
	int Meses;
	int QuantidadeFuncionarios = 0;
	int Contador;
	int Contador2;
	int Troca;

	bool ContratadosNoMesmoMes;
	bool MesmaMatricula;
	
	printf("DIGITE 0 NA MATRÍCULA PARA ENCERRAR O CADASTRO DE FUNCIONÁRIOS\n\n");
	for(Contador = 0; Contador < 50; Contador++){
		
		ContratadosNoMesmoMes = false;
		MesmaMatricula = false;
		
		printf("Digite a matrícula do funcionário: ");
		scanf("%d", &Matricula);
		if(Matricula == 0) break;
		
		for(Contador2 = 0; Contador2 < QuantidadeFuncionarios; Contador2++)
			if(Matricula == MatriculaFuncional[Contador2]) MesmaMatricula = true;
			
		printf("Agora, digite quantos meses de trabalho ele tem: ");
		scanf("%d", &Meses);		

		for(Contador2 = 0; Contador2 < QuantidadeFuncionarios; Contador2++)
			if(Meses == MesesTrabalho[Contador2]) ContratadosNoMesmoMes = true;
		
		if(!MesmaMatricula && !ContratadosNoMesmoMes){
			MesesTrabalho[QuantidadeFuncionarios] = Meses;
			MatriculaFuncional[QuantidadeFuncionarios] = Matricula;
			QuantidadeFuncionarios++;
		} else {
			printf("ERRO: Não consegui adicionar o funcionário pois sua matrícula já está cadastrada ou foi admitido no mesmo mês que outro funcionário.\n\n");
		}
	}

	for(Contador = 0; Contador < QuantidadeFuncionarios; Contador++){
		for(Contador2 = 0; Contador2 < QuantidadeFuncionarios; Contador2++){
			if(MesesTrabalho[Contador] < MesesTrabalho[Contador2]){

				Troca = MesesTrabalho[Contador];
				MesesTrabalho[Contador] = MesesTrabalho[Contador2];
				MesesTrabalho[Contador2] = Troca;

				Troca = MatriculaFuncional[Contador];
				MatriculaFuncional[Contador] = MatriculaFuncional[Contador2];
				MatriculaFuncional[Contador2] = Troca;
			}
		}
	}
	
	printf("\33[H\33[2J"); 

	printf("----- Funcionários admitidos mais cedo: -----\n\n");
	for(Contador = 0; Contador < 3; Contador++)
		printf("Funcionário %d, com %d mes(es) de trabalho\n", MatriculaFuncional[Contador], MesesTrabalho[Contador]);	

	printf("----- Os demais -----\n\n");
	for(Contador = 3; Contador != QuantidadeFuncionarios ; Contador++)
		printf("Funcionário %d, com %d mes(es) de trabalho\n", MatriculaFuncional[Contador], MesesTrabalho[Contador]);	


	return 0;
}