#include <stdio.h>
#include <stdlib.h>

int main()
{
    float soma = 0, divisor = 1;
    for(int i = 1; i <= 50; i++){
        soma += (divisor / i);
        divisor += 2;
    }

    printf("O valor da soma eh %.2f\n", soma);
    return 0;
}