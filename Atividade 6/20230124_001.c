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
    float num[n];
    for(int i = 0; i < n; i++){
        printf("Digite o numero %d: \n", i+1);
        scanf("%f", &num[i]);
    }
    for(int i = n-1; i >= 0; i--){
        printf("%.2f\n", num[i]);
    }
    return 0;
}
