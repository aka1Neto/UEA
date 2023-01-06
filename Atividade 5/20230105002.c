#include <stdio.h>
#include <stdlib.h>


float ler_peso(float peso);
int ler_semanas(int semanas);
void def_parto(float peso, int semanas);

int main()
{
    int semanas;
    float peso;
    peso = ler_peso(peso);
    semanas = ler_semanas(semanas);
    def_parto(peso, semanas);
}


float ler_peso(float peso){
    printf("Digite o peso do feto:\n");
    scanf("%f", &peso);
    return peso;
}

int ler_semanas(int semanas){
    printf("Digite a quantidade de semanas do feto:\n");
    scanf("%i", &semanas);
    return semanas;
}

void def_parto(float peso, int semanas){
    if(peso < 100 || semanas < 28) printf("Parto não deverá ser realizado, reavaliar clinicamente\n");
    else if(peso > 2500 && semanas > 28) printf("Parto normal\n");
    else if (peso > 1500 && peso < 2000 && semanas > 36) printf("Parto normal\n");
    else printf("Parto Cesariana");
}
