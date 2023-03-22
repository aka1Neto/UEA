#include <stdio.h>

void func(int* vet, int tam, int* max, int* min);

int main()
{
    int vet[] = {1, 2, 3, 4, 5, 6, 7};
    int tam = sizeof(vet) / sizeof(vet[0]);
    int min, max;
    func(vet, tam, &max, &min);
    printf("O valor maximo eh %d e o valor minimo eh %d.\n", max, min);
    return 0;
}

void func(int* vet, int tam, int* max, int* min){
    *max = vet[0];
    *min = vet[0];
    for(int* i = &vet[1]; i <= &vet[tam - 1]; i++){
        if(*i > *max) *max = *i;
        if(*i < *min) *min = *i;
    }
}