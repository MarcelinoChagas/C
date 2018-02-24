#include <stdio.h>
main()
{
    float salario, perc_aumento;
    printf("Digite o salario do funcionario: ");
    scanf("%f",&salario);
    printf("Digite o percentual de aumento: ");
    scanf("%f",&perc_aumento);

    salario = salario + (salario * (perc_aumento/100));

    printf("Salario Atual: %.2f",salario);
}
