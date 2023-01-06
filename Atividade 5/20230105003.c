#include <stdio.h>
#include <stdlib.h>


int scan_par(int num);
void eh_perfeito(int num);

int main()
{
    int num;
    num = scan_par(num);
    eh_perfeito(num);
}

int scan_par(int num){
    while(1){
        printf("Digite um numero par: \n");
        scanf("%d", &num);
        if(num % 2 == 0) break;
    }
    return num;
}

void eh_perfeito(int num){
    int soma = 0;
    for(int i = 1; i < num; i++){
        if(num % i == 0) soma += i;
    }

    if(soma == num) printf("O numero %d eh perfeito\n", num);
    else printf("O numero %d nao eh perfeito\n", num);
}