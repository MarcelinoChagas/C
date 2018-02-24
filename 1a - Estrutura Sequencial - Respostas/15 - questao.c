#include <stdio.h>
main()
{
 float salario_base, imposto;
    printf("Digite o salario base do funcionario: ");
    scanf("%f",&salario_base);
    printf("Salario com gratificacao: %.2f", salario_base + 50.00);
    printf("\nSalario menos impostos: %.2f", salario_base + 50.00 - salario_base * 0.10);
}
