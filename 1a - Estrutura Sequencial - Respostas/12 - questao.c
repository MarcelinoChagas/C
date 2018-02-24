#include <stdio.h>
main()
{
    float salario;
    printf("Digite o valor do salario do funcionario: ");
    scanf("%f",&salario);
    printf("O salario sofreu um aumento\nSalario Atual: %.2f", salario + salario*0.25);
}
