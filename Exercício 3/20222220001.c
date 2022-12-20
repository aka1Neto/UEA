#include <stdio.h>

int main(){
    float numero, soma = 0;
    for(int i = 1; i <= 5; i++){
        printf("Digite o numero %d: \n", i);
        scanf("%f", &numero);
        soma += numero;
    }
    printf("A soma dos 5 numeros eh: %.2f \n", soma);
    return 0;
}