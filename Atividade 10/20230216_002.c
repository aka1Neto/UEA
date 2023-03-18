#include <stdio.h>
#include <stdlib.h>

int* intersecao(int con1[], int con2[]);

int main()
{
    int n, p;
    printf("Digite o numero de conjuntos: \n");
    scanf("%d", &n);
    printf("Digite o tamanho do primeiro conjunto: \n");
    scanf("%d", &p);
    int inter[p+1];
    inter[0] = p;
    int* intersecoes[n];
    intersecoes[0] = inter;
    for(int i = 1; i <= p; i++){
        printf("Digite o valor %d do conjunto: \n", i);
        scanf("%d", &inter[i]);
    }
    for(int i = 1; i < n; i++){
        int t;
        printf("Digite o tamanho do conjunto %d: \n", i + 1);
        scanf("%d", &t);
        int vet[t+1];
        vet[0] = t;
        for(int j = 1; j <= t; j++){
            printf("Digite o valor %d do conjunto: \n", j);
            scanf("%d", &vet[j]);
        }
        intersecoes[i] = intersecao(intersecoes[i - 1], vet);
    }
    printf("O conjunto intersecao eh: [");
    for(int i = 1; i <= intersecoes[n-1][0]; i++){
        if(i != intersecoes[n-1][0]) printf("%d, ", intersecoes[n-1][i]);
        else printf("%d]\n", intersecoes[n-1][i]);
    }
    for(int i = n - 1; i > 0; i--){
        free(intersecoes[i]);
    }
    return 0;
}

int* intersecao(int con1[], int con2[]){
    int tam = 0;

    for(int i = 1; i < con1[0] + 1; i++){
        for(int j = 1; j < con2[0] + 1; j++){
            if(con1[i] == con2[j]) tam++;
        }
    }
    int x = 1;
    int* arr = malloc((tam + 1) * sizeof(int));
    arr[0] = tam;
    for(int i = 1; i < con1[0] + 1; i++){
        for(int j = 1; j < con2[0] + 1; j++){
            if(con1[i] == con2[j]){
                arr[x] = con1[i];
                x++;
            }
        }
    }
    return arr;
}
