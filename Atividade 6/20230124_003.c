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
    print_par(num, n);
    return 0;
}
void print_par(int* num, int tam){
    for(int i = 0; i < tam; i++){
        if(num[i] % 2 == 0) printf("%d\n", num[i]);
    }
}
