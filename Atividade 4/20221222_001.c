#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float valor, aprox, nova_aprox;
    printf("Digite o valor para se obter a raiz quadrada: \n");
    scanf("%f", &valor);
    aprox = valor / 2;
    while(1){
        nova_aprox = aprox - ((pow(aprox, 2) - valor) / (2 * aprox));
        if(fabs(nova_aprox - aprox) < 0.1) break;
        else aprox = nova_aprox;
    }
    printf("Aproximacoes sucessivas de Newton-Raphson: %.2f\n", nova_aprox);
    printf("Funcao sqrt: %.2f\n", sqrt(valor));
    return 0;
}