#include <stdio.h>
#include <stdlib.h>

int main(){
    float valor_conta, nova_conta, porcentagem;
    printf("Digite o valor da conta: \n");
    scanf("%f",&valor_conta);
    printf("Digite a porcentagem do garcom. Numero entre 1 e 100 \n");
    scanf("%f", &porcentagem);
    nova_conta = valor_conta * (1 + (porcentagem/100));
    printf("O novo valor eh %.2f\n", nova_conta);
    return 0;
}