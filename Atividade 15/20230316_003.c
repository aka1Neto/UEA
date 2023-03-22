#include <stdio.h>
#include <stdlib.h>

float** sum(float** vet1, float**vet2, int row, int col);
float** aloca(int row, int col);

int main(){
    int m, n;
    printf("Digite o numero de linhas e colunas: \n");
    scanf("%d%d", &m, &n);
    float** vet1 = aloca(m, n);
    float** vet2 = aloca(m, n); 
    float** soma = sum(vet1, vet2, m, n);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("O valor [%d][%d] do vetor soma eh %.2f\n", i + 1, j + 1, *(*(soma + i) + j));
        }
    }
    return 0;
}

float** aloca(int row, int col){
    printf("Digite os valores do vetor: \n");
    float** arr = malloc(row * sizeof(float));
    for(int i = 0; i < row; i++){
        *(arr + i) = malloc(col * sizeof(float));
    }
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%f", (*(arr + i) + j));
        }
    }
    return arr;
}

float** sum(float** vet1, float**vet2, int row, int col){
    float** arr = malloc(row * sizeof(float));
    for(int i = 0; i < row; i++){
        *(arr + i) = malloc(col * sizeof(float));
    }
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
           *(*(arr + i) + j) = *(*(vet1 + i) + j) + *(*(vet2 + i) + j);
        }
    }
    return arr;
}