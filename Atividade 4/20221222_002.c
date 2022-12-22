#include <stdio.h>
#include <stdlib.h>

int main()
{
    float maior, menor, valor;
    printf("Digite o primeiro valor: \n");
    scanf("%f", &valor);
    maior = valor;
    menor = valor;

    for(int i = 1; i < 15; i++){
        printf("Digite o valor %d: \n", i + 1);
        scanf("%f", &valor);

        if(valor > maior) maior = valor;
        if(valor < menor) menor = valor;
    }

    printf("Maior valor eh %.2f\n", maior);
    printf("Menor valor eh %.2f\n", menor);
    return 0;
}