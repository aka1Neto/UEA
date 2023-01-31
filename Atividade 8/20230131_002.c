#include <stdio.h>
#include <string.h>

int main()
{
    int menor = 4;
    char marcas[5][100];
    float consumo[5], litros[5];
    for(int i = 0; i < 5; i++){
        printf("Digite a marca %d: \n", i + 1);
        scanf("%s", &marcas[i]);
    }
    for(int i =0; i < 5; i++){
        printf("Digite quantos KM a marca %s faz por litro: \n", marcas[i]);
        scanf("%f", &consumo[i]);
        litros[i] = 1000 / consumo[i];
    }
    for(int i = 0; i < 4; i++){
        if(consumo[i] < consumo[i + 1]) menor = i;
    }
    
    for(int i = 0; i < 5; i++){
        printf("A marca %s consome %.2f litros para percorrer 1000KM\n", marcas[i], litros[i]);
    }
    
}