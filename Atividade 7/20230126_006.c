#include <stdio.h>

int checar_mul(int coluna1, int linha2){
    if(linha2 == coluna1) return 1;
    else return 0;
}

int main()
{
    int bool;
    int lin1, lin2, col1, col2;
    printf("Digite o numero de linhas e colunas da matriz 1: \n");
    scanf("%d%d", &lin1, &col1);
    printf("Digite o numero de linhas e colunas da matriz 2: \n");
    scanf("%d%d", &lin2, &col2);
    int mat1[lin1][col1], mat2[lin2][col2];
    bool = checar_mul(col1, lin2);
    
    if(bool == 0){
        printf("Nao eh possivel realizar a multiplicacao.\n");
    }
    
    else{
        int mat3[lin1][col2];
        for(int i = 0; i < lin1; i++){
            for(int j = 0; j < col1; j++){
                printf("Digite o numero da posicao [%d][%d] da matriz 1: \n", i + 1, j + 1);
                scanf("%d", &mat1[i][j]);
            }
        }
        
        for(int i = 0; i < lin2; i++){
            for(int j = 0; j < col2; j++){
                printf("Digite o numero da posicao [%d][%d] da matriz 2: \n", i + 1, j + 1);
                scanf("%d", &mat2[i][j]);
            }
        }
        
        for(int i = 0; i < lin1; i++){
            for(int j = 0; j < col2; j++){
                int aux = 0;
                for(int k = 0; k < lin2; k++){
                    aux += mat1[i][k] * mat2[k][j];
                }
                mat3[i][j] = aux;
            }
        }
        printf("A nova matriz eh: \n");
        for(int i = 0; i < lin1; i++){
            for(int j = 0; j < col2; j++){
                printf("%d ", mat3[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
