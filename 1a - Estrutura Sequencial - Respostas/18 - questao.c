#include <stdio.h>
main()
{
    float area, raio, pi = 3.1415;
    printf("Digite o valor do raio: ");
    scanf("%f",&raio);
    area = pi * (raio * raio);
    printf("Area do Circulo: %.2f",area);
}
