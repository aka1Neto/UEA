#include <stdio.h>

int main(){
    int p, impar = 1;
    printf("Digite o valor de p: \n");
    scanf("%d", &p);
    for(int n = 0; n < p; n++){
        printf("%d ao cubo eh igual a soma dos valores: ", n + 1);
        for(int i = 0; i <= n; i++){
            printf("%d ", impar);
            impar += 2;
        }
        printf("\n");
    }
    return 0;
}