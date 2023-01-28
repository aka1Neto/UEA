#include <stdio.h>
#include <stdlib.h>
#define LINHA 5
#define COLUNA 5

void diag_principal(int vet[][COLUNA]);
void diag_secundaria(int vet[][COLUNA]);
void somal_4(int vet[][COLUNA]);
void somac_2(int vet[][COLUNA]);
void sem_diag_principal(int vet[][COLUNA]);

int main()
{
    int vet[LINHA][COLUNA];
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
        printf("Digite o numero da posicao [%d][%d] do vetor: \n", i+1, j+1);
        scanf("%d", &vet[i][j]);
        }
    }
    diag_principal(vet);
    diag_secundaria(vet);
    somal_4(vet);
    somac_2(vet);
    sem_diag_principal(vet);
    return 0;
}

void diag_principal(int vet[][COLUNA]){
    printf("A diagonal principal eh: \n");
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(i == j) printf("%d ", vet[i][j]);
            else printf("  ");
        }
        printf("\n");
    }
}

void diag_secundaria(int vet[][COLUNA]){
    printf("A diagonal secundaria eh: \n");
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(i + j == LINHA - 1) printf("%d ", vet[i][j]);
            else printf("  ");
        }
        printf("\n");
    }
}

void somal_4(int vet[][COLUNA]){
    int soma = 0;
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(i == 3) soma += vet[i][j];
        }
    }
    printf("Soma da LINHA 4 eh igual a %d\n", soma);
}

void somac_2(int vet[][COLUNA]){
    int soma = 0;
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(j == 1) soma += vet[i][j];
        }
    }
    printf("Soma da COLUNA 2 eh igual a %d\n", soma);
}

void sem_diag_principal(int vet[][COLUNA]){
    printf("A matriz sem a diagonal principal eh: \n");
    for(int i = 0; i < LINHA; i++){
        for(int j = 0; j < COLUNA; j++){
            if(i == j) printf("  ");
            else printf("%d ", vet[i][j]);
        }
        printf("\n");
    }
}
