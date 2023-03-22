#include <stdio.h>
#include <stdlib.h>


int main(){
    int** vet = malloc(2 * sizeof(int));
    for(int i = 0; i < 2; i++){
        *(vet + i) = malloc(3 * sizeof(int));
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor [%d][%d]: \n", i + 1, j + 1);
            scanf("%d", (*(vet + i) + j));
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("O valor [%d][%d] eh: %d\n", i + 1, j + 1, *(*(vet + i) + j));
        }
    }
    for(int i = 0; i < 2; i++){
        free(*(vet + i));
    }
    free(vet);
    return 0;
}