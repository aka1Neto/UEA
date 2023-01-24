#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(1){
        printf("Quantos numeros deseja inserir?\n");
        scanf("%d", &n);
        if(n>=1 && n<= 100) break;
        else printf("Digite um numero entre 1 e 100");
    }
    int num[n];
    for(int i = 0; i < n; i++){
        printf("Digite o numero %d: \n", i+1);
        scanf("%d", &num[i]);
    }
    print_fatorial(num, n);
    return 0;
}
void print_fatorial(int* num, int tam){
    for(int i = 0; i < tam; i++){
        int soma = 1;
        for(int j = 1; j <= num[i]; j++){
            soma *= j;
        }
        printf("%d\n", soma);
    }
}