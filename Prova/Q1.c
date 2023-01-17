#include <stdio.h>
#include <stdlib.h>

int main()
{
    float maior = 0, menor = 999999999;
    float media, nota, soma = 0;
    int loop = 1, cont = 0;
    while(loop){
        scanf("%f", &nota);
        if(nota < 0) loop = 0;
        else{
            if(nota > maior) maior = nota;
            if(nota < menor) menor = nota;
            soma += nota;
            cont++;
        }
    }
    media = soma / cont;
    printf("A media das notas eh: %.2f\n", media);
    printf("A menor das notas eh: %.2f\n", menor);
    printf("A maior das notas eh: %.2f\n", maior);
    return 0;
}
