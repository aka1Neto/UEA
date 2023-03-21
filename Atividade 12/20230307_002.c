#include <stdio.h>
#include <stdlib.h>

int* find(int valor, int* start, int* end);

int main()
{
    int vet[10] = {1,2,3,2,5,2,7,8,9,10};
    int* pointer = find(2, &vet[0], &vet[9]);
    if(pointer[0] == '\0') printf("Valor nao encontrado\n");
    else{
        printf("O valor foi encontrado nos enderecos de memoria: \n");
        for(int* i = &pointer[0]; i <= &pointer[9]; i++){
            if(*(i) == '\0') break;
            else printf("%x\n", i);
        }
    }
    return 0;
}

int* find(int valor, int* start, int* end){
    int* pointer = malloc(10 * sizeof(int));
    int found = 0;
    for(int* i = start; i <= end; i++){
        if(*(i) == valor){
            pointer[found] = i;
            found++;
        }
    }
    if(found <= 9) pointer[found] = '\0';
    return pointer;
}