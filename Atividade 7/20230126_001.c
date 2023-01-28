#include <stdio.h>
#include <stdlib.h>


void selection_sort(int* vetor, int tamanho);

int main()
{
    int linha = 3, coluna = 5;
    int vet1[linha][coluna], vet2[linha][coluna];
    int vet_soma[linha][coluna];
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
        printf("Digite o numeros da posicao [%d][%d] do vetor a e b: \n", i+1, j+1);
        scanf("%d%d", &vet1[i][j], &vet2[i][j]);
        vet_soma[i][j] = vet1[i][j] + vet2[i][j];
        }
    }
    printf("O resultado da soma das duas matrizes eh: /n");
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("%d ", vet_soma[i][j]);
        }
        printf("\n");
    }
    return 0;
}