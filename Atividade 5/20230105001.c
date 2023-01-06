#include <stdio.h>
#include <stdlib.h>


int scanIntIntervalo(char s);
float percentual(float n1, float n2);
float absdif(float n1, float n2);

int main()
{
    int x, y;
    float abs_dif, perc, menor, maior;
    x = scanIntIntervalo('x');
    y = scanIntIntervalo('y');
   
    if(x > y){
        maior = x;
        menor = y;
    }
    else{
        maior = y;
        menor = x;
    }
   
    perc = percentual(menor, maior);
    abs_dif = absdif(maior, menor);

    printf("O percentual do menor em relacao ao maior eh %.2f%%\n", perc);
    printf("O modulo da diferenca entre o maior e o menor eh %.2f\n", abs_dif);
    return 0;
}

int scanIntIntervalo(char s){
    int num;
    while(1){
        printf("Digite o numero %c, entre 0 e 100: \n", s);
        scanf("%d", &num);
        if(num >= 0 && num <= 100) break;
    }
    return num;
}

float percentual(float n1, float n2){
    float perc;
    perc = (n1 / n2) * 100;
    return perc;
}

float absdif(float n1, float n2){
    float abs_dif;
    abs_dif = (n1 - n2);
    if(abs_dif < 0) abs_dif *= -1;
    return abs_dif;
}