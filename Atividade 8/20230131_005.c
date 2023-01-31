#include <stdio.h>
#include <string.h>

int main()
{
    char frase[1000];
    int tamanho;
    printf("Digite a frase base\n");
    scanf("%[a-z A-Z]", &frase);
    tamanho = strlen(frase);
    for(int i = 0; i < tamanho; i++){
        if(frase[i] == 32) frase[i] = 32;
        else if(frase[i] > 87 && frase[i] < 97 || frase[i] > 119){
            frase[i] -= 23;
        }
        else frase[i] +=3;
    }
    printf("A nova frase eh: %s\n", &frase);
}