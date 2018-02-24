#include <stdio.h>
main()
{
    int n1,n2,n3;
    float p1,p2,p3,media;

    scanf("%i",&n1);
    scanf("%i",&n2);
    scanf("%i",&n3);

    printf("\nDigite o respectivos pesos das notas\n");
    scanf("%f",&p1);
    scanf("%f",&p2);
    scanf("%f",&p3);

    if((p1+p2+p3)<= 100)
    {
        p1 = n1* (p1/100);
        printf("\nNota 1: %.2f",p1);
        p2 = n2* (p2/100);
        printf("\nNota 2: %.2f",p2);
        p3 = n3* (p3/100);
        printf("\nNota 3: %.2f",p3);
        media = (p1+p2+p3)/3;
        printf("\nMedia: %.2f",media);
    }else
        printf("\nPeso esta acima de 100.");
}
