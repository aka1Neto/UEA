#include <stdio.h>
#include <stdlib.h>

int main()
{
    int segundo = 0, minuto = 0, hora = 0;
    float massa;
    printf("Digite a massa inicial: \n");
    scanf("%f", &massa);
    printf("A massa inicial eh: %.2f\n", massa);

    while(massa >= 0.5){
        massa /= 2;
        segundo += 50;
    }
    minuto = segundo / 60;
    segundo -= minuto * 60;
    hora = minuto / 60;
    minuto -= hora * 60;

    printf("A massa final eh %.2f\n", massa);
    printf("O tempo foi de %d hora(s), %d minuto(s) e %d segundo(s)\n", hora, minuto, segundo);
    return 0;
}