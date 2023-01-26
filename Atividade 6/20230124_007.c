#include <stdio.h>
#include <stdlib.h>


void selection_sort(int* vetor, int tamanho);

int main()
{
    int n;
    while(1){
        printf("Digite o numero de elementos do vetor?\n");
        scanf("%d", &n);
        if(n>=1 && n<= 100) break;
        else printf("Digite um numero entre 1 e 100");
    }
    int vet[n];
    for(int i = 0; i < n; i++){
        printf("Digite o numero %d do vetor a: \n", i+1);
        scanf("%d", &vet[i]);
    }
    selection_sort(vet, n);
    return 0;
}

void selection_sort(int* vetor, int tamanho){
    int aux;
    for(int i = 0; i < tamanho - 1; i++){
        for(int j = i + 1; j < tamanho; j++){
            if(vetor[i] < vetor [j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    for(int i = 0; i < tamanho; i++){
        printf("%d\n", vetor[i]);
    }
}