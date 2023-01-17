#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float scan_real();
float arctan(float n);
void resposta(float n, float arct);

int main()
{
    float n, arct;
    n = scan_real();
    arct = arctan(n);
    resposta(n, arct);
    return 0;
}

float scan_real(){
    float n, loop = 1;
    while(loop){
        scanf("%f", &n);
        if(n >= 0 && n <= 1) loop = 0;
    }
    return n;
}

float arctan(float n){
    int k = 1, soma = 1, loop = 1;
    float arct = 0, serie;
    while(loop){
        serie = (pow(n, k)) / k;
        if(serie < 0.0001) loop = 0;
        else{
            if(soma % 2 == 1) arct += serie;
            else arct -= serie;
            k += 2;
            soma++;
        }
    }
    return arct;
}

void resposta(float n, float arct){
    printf("O arco tangente de %.2f eh %.2f", n, arct);
}
