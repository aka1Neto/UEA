#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char frase_aux[1000], frase[1000];
    int tamanho, k = 0;
    printf("Digite a frase base\n");
    scanf("%[a-z A-Z]", &frase);
    tamanho = strlen(frase);
    for(int i = 0; i < tamanho; i++){
        if(frase[i] != 32){
            frase_aux[k] = frase[i];
            k++;
        }
    }
    tamanho = strlen(frase_aux);
    char frase_inversa[tamanho];
    for(int i = 0, j = tamanho - 1; i < tamanho, j >= 0; i++, j--){
        frase_aux[j] = toupper(frase_aux[j]);
        frase_inversa[i] = frase_aux[j];
    }
    if(strcmp(frase_aux, frase_inversa) == 0) printf("A frase eh um palindromo\n");
    else printf("A frase nao eh um palindromo");
    
    return 0;
}