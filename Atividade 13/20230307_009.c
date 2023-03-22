#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* find_letter(char* frase, char letra, int* tam);

int main()
{
    char frase[] = "Memento mori";
    int tam = 0;
    char* pointer = find_letter(frase, 'm', &tam);
    if(pointer[0] == '\0') printf("Letra nao encontrada.\n");
    else{
        printf("A letra foi encontrada nos seguintes enderecos de memoria: \n");
        for(int i = 0; i < tam; i++){
            if(pointer[i] == '\0') break;
            else printf("%x\n", pointer[i]);
        }
    }
    printf("%d\n", tam);
    return 0;
}

char* find_letter(char* frase, char letra, int* tam){
    int len = strlen(frase);
    char* arr = malloc(len * sizeof(char));
    int x = 0;
    for(char* i = &frase[0]; i <= &frase[len - 1]; i++){
        if(tolower(*i) == tolower(letra)){
            arr[x] = i;
            x++;
            *(tam) += 1;
        }
    }
    if(x < len) arr[x] = '\0';
    return arr;
}