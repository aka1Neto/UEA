#include <stdio.h>
#include <stdlib.h>

int* aloca(int n);
void max_min(int* vet, int n, int* max, int* min);

int main(){
    int n, maior, menor;
    printf("Digite a quantidade de numeros: \n");
    scanf("%d", &n);
    int* vet = aloca(n);
    max_min(vet, n, &maior, &menor);
    printf("O maior valor eh %d e o menor valor eh %d\n", maior, menor);
    return 0;
}

int* aloca(int n){
    int* vet = malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }
    return vet;
}

void max_min(int* vet, int n, int* max, int* min){
    *max = vet[0];
    *min = vet[0];
    for(int* i = &vet[1]; i <= &vet[n - 1]; i++){
        if(*i > *max) *max = *i;
        if(*i < *min) *min = *i;
    }
}