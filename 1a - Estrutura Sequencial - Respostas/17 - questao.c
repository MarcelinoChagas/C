#include <stdio.h>
main()
{
    float area,base,altura;
    printf("Digite o valor da base: ");
    scanf("%f",&base);
    printf("Digite um valor da altura: ");
    scanf("%f",&altura);

    area = (base * altura)/2;

    printf("Area do Triangulo %.2f",area);
}
