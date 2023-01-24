#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    while(1){
        printf("Quantos lancamentos de dado?\n");
        scanf("%d", &n);
        if(n>=1 && n<= 100) break;
        else printf("Digite um numero entre 1 e 100");
    }
    int num[n];
    for(int i = 0; i < n; i++){
        printf("Digite o numero %d: \n", i+1);
        scanf("%d", &num[i]);
    }
    print_ocorrencia(num, n);
    return 0;
}
void print_ocorrencia(int* num, int tama){
    int dado[6];
    float ocorrencia[6], tam = tama;
    for(int i = 0; i < 6; i++){
        dado[i] = 0;
    }
    for(int i = 0; i < tam; i++){
        dado[num[i] - 1] += 1;
    }
    for(int i = 0; i < 6; i++){
        ocorrencia[i] = dado[i]/tam;
        printf("A ocorrencia da face %d eh de: %.2f%%\n", i + 1, ocorrencia[i] * 100);
    }
}
