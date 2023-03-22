#include <stdio.h>

void troca(float *a, float *b);

int main()
{
    float a = 7, b = 8;
    troca(&a, &b);
    printf("O valor de a eh %.2f e o valor de b eh %.2f\n", a, b);
    return 0;
}

void troca(float *a, float *b){
    float aux;
    aux = *a;
    *a = *b;
    *b = aux;
}