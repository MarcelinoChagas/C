#include <stdio.h>
main()
{
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%i",&n);
    int a = n;
    printf("Seu antecessor %i\nSeu sucessor %i\n",--a,++n);
}
