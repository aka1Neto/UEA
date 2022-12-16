#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario_atual, novo_salario;
    int ajuste;
    printf("Digite o salario atual: \n");
    scanf("%f", &salario_atual);
    printf("Para aumento, digite 1, reducao, 2: \n");
    scanf("%d", &ajuste);
    if (ajuste == 2){
        novo_salario = salario_atual * 0.9;
    }
    else novo_salario = salario_atual * 1.1;
    printf("Novo salario eh %.2f\n", novo_salario);    
    return 0;
}