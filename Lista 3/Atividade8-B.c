#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char NomeProduto[100];
    char MaisProduto;
    double Preco = 0;
    double PrecoTotal = 0;
    double PrecoFinal = 0;
    int QuantidadeProdutos = 0;
    int ProdutosDiferentes = 0;
    int TotalProdutos = 0;

    printf("\nCaso deseje terminar o procedimento, digite o valor -1 ao preco\n");

    do
    {
        printf("\nO que deseja?: \n");
        fgets(NomeProduto, 100, stdin);

        printf("\n De quantos\n %s precisa?: \n", NomeProduto);
        scanf("%d", &QuantidadeProdutos);

        system("pause");
        system("cls");

        printf("\nDigite o preco de\n %s : \n", NomeProduto);
        scanf("%lf", &Preco);

        PrecoTotal = Preco * QuantidadeProdutos;
        PrecoFinal += PrecoTotal;
        TotalProdutos += QuantidadeProdutos;

        printf("\nPreco total de %s e: %.2f\n", NomeProduto, PrecoTotal);

        fflush(stdin);

        ProdutosDiferentes++;

    } while (Preco != -1);

    printf("\nO total de produtos e: \n%d\nTotalizando : \nR$%.2lf", TotalProdutos, PrecoFinal);
}