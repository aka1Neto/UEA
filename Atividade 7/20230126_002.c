#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, encontrar = 0;
    int linha = 3, coluna = 3;
    int vet[linha][coluna];
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
        printf("Digite o numero da posicao [%d][%d] do vetor: \n", i+1, j+1);
        scanf("%d", &vet[i][j]);
        }
    }
    printf("Digite o numero que deseja encontrar: \n");
    scanf("%d", &n);
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            if(vet[i][j] == n){
                printf("O numero %d esta na posicao [%d][%d]\n", n, i+1, j+1);
                encontrar = 1;
            }
        }
    }
    if(encontrar == 0) printf("Numero nao encontrado\n");
    return 0;
}