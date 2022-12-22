#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma_impar = 0, soma_par = 0, valor;
    while(1){
        printf("Digite um numero inteiro positivo para ser somado: \n");
        scanf("%d", &valor);

        if(valor > 1000) break;

        if(valor % 2 == 0) soma_par += valor;
        else soma_impar += valor;

    }

    printf("A soma dos numeros impares eh: %d\n", soma_impar);
    printf("A soma dos numeros pares eh: %d\n", soma_par);
    return 0;
}