#include <stdio.h>

int main(){
    int numero, soma = 0;
    
    for(int i = 1; i <= 50; i++){
        printf("Digite o numero %d: \n", i);
        scanf("%d", &numero);
        
        if(numero % 2 == 1){
            if(100 <= numero && numero <= 200) soma += numero;
        }
    }
    
    printf("A soma dos numeros impares que estao entre 100 e 200 eh: %d\n", soma);
    return 0;
}