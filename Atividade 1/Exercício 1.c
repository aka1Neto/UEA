#include <stdio.h>
#include <stdlib.h>

int main(){
    int base, altura;
    float area;
    printf("Digite a base e a altura do triangulo: \n");
    scanf("%d %d", &base, &altura);
    area = (base * altura)/2;
    printf("A area e: %.2f\n", area);
    return 0;
}