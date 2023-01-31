#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Digite o tamanho da matriz quadrada: \n");
    scanf("%d", &n);
    int resultado, somal[n], somac[n];
    int vet[n][n], somap = 0, somas = 0;
    for(int i = 0; i < n; i++){
        somal[i] = 0;
        somac[i] = 0;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
        printf("Digite o numero da posicao [%d][%d] do vetor: \n", i+1, j+1);
        scanf("%d", &vet[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            somal[i] += vet[i][j];
            somac[j] += vet[i][j];
            if(i == j) somap += vet[i][j];
            if(i + j == n - 1) somas += vet[i][j];
        }
    }
    resultado = somap;
    for(int i = 0; i < n; i++){
        if(somal[i] != resultado || somac[i] != resultado){
            printf("Nao eh quadrado magico\n");
            return 0;
        }
    }
    if (somas != resultado){
        printf("Nao eh quadrado magico\n");
        return 0;
    }
    printf("A matriz eh um quadrado magico\n");
    return 0;
}