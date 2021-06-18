#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char NomeProduto[100];
    int QuantidadeProdutos;
    int Contador;
    double Preco;
    double PrecoTotal;

    printf("\nO que deseja?: \n");
    fgets(NomeProduto, 100, stdin);

    printf("\n De quantos\n %s precisa?: \n", NomeProduto);
    scanf("%d", &QuantidadeProdutos);

    system("pause");
    system("cls");

    printf("\nDigite o preco de\n %s : \n", NomeProduto);
    scanf("%lf", &Preco);

    PrecoTotal = Preco * QuantidadeProdutos;

    printf("\nPreco total de:\n %d %s e: R$%.2f\n, o preco unitario e %.2f", QuantidadeProdutos, NomeProduto, PrecoTotal, Preco);

    return 0;
}