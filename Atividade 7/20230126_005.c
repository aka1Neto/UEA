#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k, n, valor = 0;
    printf("Digite o numero de cidades: \n");
    scanf("%d", &k);
    printf("Digite o numero de itinerarios: \n");
    scanf("%d", &n);
    int intinerario[n], preco[k][k];

    for(int i = 0; i < n; i++){
        printf("Digite o intinerario %d: \n", i + 1);
        scanf("%d", &intinerario[i]);
    }

    for(int i = 0; i < k; i++){
        for(int j = 0; j < k; j++){
            if(i!=j && i<j){
                printf("Digite o valor da viagem entre as cidades %d e %d: \n", i+1, j+1);
                scanf("%d", &preco[i][j]);
                preco[j][i] = preco[i][j];    
            }
            if(i == j) preco[i][j] = 0;           
        }
    }

    for(int i = 0; i < k; i++){
        for(int j = 0; j < k; j++){
            printf("%d ", preco[i][j]);
        }
        printf("\n"); 
    }
    
    for(int i = 0; i < n - 1; i++){
        valor += preco[intinerario[i] - 1][intinerario[i+1] - 1];
    }

    printf("O custo do itinerario eh: %d\n", valor);
    return 0;
}