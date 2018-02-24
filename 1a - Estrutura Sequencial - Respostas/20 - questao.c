#include <stdio.h>
main()
{
    float preco_fab, perc_lucro, perc_impo;
    printf("Digite o preco de fabricacao: ");
    scanf("%f",&preco_fab);
    printf("\nDigite o percentual de lucro: ");
    scanf("%f",&perc_lucro);
    printf("\nDigite o percentual de impostos: ");
    scanf("%f",&perc_impo);

    printf("\nLucro do Distribuidor: %.2f",preco_fab + (preco_fab *(perc_lucro/100)));
    printf("\nImpostos: %.2f", preco_fab * (perc_impo/100));
    printf("\nPreco Final do Produto: %.2f", preco_fab + (preco_fab *(perc_lucro/100) + preco_fab * (perc_impo/100)));
}
