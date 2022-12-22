#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, soma = 0;
    printf("Digite o numero para ser verificado se eh perfeito: \n");
    scanf("%d", &numero);

    for(int i = 1; i < numero; i++){
        if(numero % i == 0) soma += i;
    }

    if(soma == numero) printf("O numero %d eh perfeito\n", numero);
    else printf("O numero %d nao eh perfeito\n", numero);
    return 0;
}