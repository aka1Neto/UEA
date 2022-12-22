#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, primo = 1;
    printf("Digite o numero para verificar se eh primo: \n");
    scanf("%d", &numero);
    for(int i = 2; i < numero; i++){
        if(numero % i == 0) primo = 0;
    }

    if(primo) printf("O numero %d eh primo\n", numero);
    else printf("O numero %d nao eh primo\n", numero);

    return 0;
}
