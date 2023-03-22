#include <stdio.h>

int main()
{
    int vet[8];
    for(int i = 0; i < 8; i++){
        printf("Digite o valor %d: \n", i + 1);
        scanf("%d", (vet + i));
    }
    for(int* i = &vet[0]; i <= &vet[7]; i++){
        printf("\n");
        printf("%d, %d\n", *(i), *(i) * 2);
        if(*(i) % 2 == 0) printf("Ha um numero par no endereco %x\n", i);
    }
    return 0;
}
