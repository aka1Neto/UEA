#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mediaDesvio(float* notas, int tam, float* media, float* desvio);

int main(){
    int tam = 10;
    float media, desvio;
    float* notas = malloc(tam * sizeof(float));
    for(int i = 0; i < tam; i++){
        notas[i] = i + 1;
    }
    mediaDesvio(notas, tam, &media, &desvio);
    printf("A media eh %.2f e o desvio eh %.2f\n", media, desvio);
    free(notas);
    return 0;
}

void mediaDesvio(float* notas, int tam, float* media, float* desvio){
    float soma = 0;
    for(float* i = &notas[0]; i <= &notas[tam - 1]; i++){
        soma += *(i);
    }
    
    *media = soma / tam;
    
    soma = 0;
    for(float* i = &notas[0]; i <= &notas[tam - 1]; i++){
        soma += pow(*(i) - *(media), 2);
    }
    
    *desvio = sqrt(soma/tam);
}