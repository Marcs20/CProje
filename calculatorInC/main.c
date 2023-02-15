#include <stdio.h>
#include <stdlib.h>

int main()
{
    double numero1;
    double numero2;
    printf("Digite o primeiro numero: \n");
    scanf("%lf", &numero1);
    printf("Digite o segundo numero: \n");
    scanf("%lf", &numero2);
    printf("Resposta: %f", numero1 + numero2);
    return 0;
}
