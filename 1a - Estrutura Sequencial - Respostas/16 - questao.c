#include <stdio.h>
main()
{
    float deposito, taxa;
    printf("Digite o valor para deposito: ");
    scanf("%f",&deposito);
    printf("\nDigite valor para taxa de juros: ");
    scanf("%f",&taxa);

    printf("Vai render juros de R$ %.2f", deposito * (taxa/100));
}
