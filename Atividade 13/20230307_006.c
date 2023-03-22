#include <stdio.h>

int sum(int* a, int tam1, int* b, int tam2, int* c);

int main()
{
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {4, 3, 2, 1};
    int tam1 = sizeof(arr1) / sizeof(arr1[0]);
    int tam2 = sizeof(arr2) / sizeof(arr2[0]);
    int soma[tam1];
    if(sum(arr1, tam1, arr2, tam2, soma)){
        printf("O array da soma eh: \n");
        for(int* i = &soma[0]; i <= &soma[tam1-1]; i++){
            printf("%d\n", *i);
        }
    }
    else printf("Os arrays possuem tamanho diferente.\n");
    return 0;
}

int sum(int* a, int tam1, int* b, int tam2, int* c){
    if(tam1 != tam2) return 0;
    else{
        for(int i = 0; i < tam1; i++){
            c[i] = a[i] + b[i];
        }
        return 1;
    }
}
