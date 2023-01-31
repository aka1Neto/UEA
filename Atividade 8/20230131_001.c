#include <stdio.h>
#include <ctype.h>
#include <string.h>

void print_inverso(char* palavra, int tamanho);
void sem_vogal(char* palavra, int tamanho);
void print_maiusculo(char* palavra, int tamanho);
void print_vezes(char* palavra,int tamanho, char caractere);
void sem_caractere(char* palavra, int tamanho, char caractere);

int main()
{
    int tamanho;
    char caractere;
    char palavra[100];
    printf("Escreva a palavra base: \n");
    scanf("%s", &palavra);
    printf("Escreva o caractere: \n");
    scanf(" %c", &caractere);
    tamanho = strlen(palavra);
    
    print_inverso(palavra, tamanho);
    sem_vogal(palavra, tamanho);
    print_maiusculo(palavra, tamanho);
    print_vezes(palavra, tamanho, caractere);
    sem_caractere(palavra, tamanho, caractere);
    return 0;
}

void print_inverso(char* palavra, int tamanho){
    printf("O inverso da palavra eh : ");
    for(int i = tamanho - 1; i >= 0; i--){
        printf("%c", palavra[i]);
    }
    printf("\n");
}

void sem_vogal(char* palavra, int tamanho){
    printf("A palavra sem vogal eh: ");
    char c;
    for(int i = 0; i < tamanho; i++){
        c = toupper(palavra[i]);
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') continue;
        else printf("%c", palavra[i]);
    }
    printf("\n");
}
void print_maiusculo(char* palavra, int tamanho){
    printf("A palavra em maiusculo eh: ");
    char c;
    for(int i = 0; i < tamanho; i++){
        c = toupper(palavra[i]);
        printf("%c", c);
    }
    printf("\n");
}

void print_vezes(char* palavra,int tamanho, char caractere){
    int cont = 0;
    char c;
    for(int i = 0; i < tamanho; i++){
        c = toupper(palavra[i]);
        if(c == caractere || c == caractere - 32) cont++;
    }
    printf("O caractere '%c' aparece %d vezes\n", caractere, cont);
}

void sem_caractere(char* palavra, int tamanho, char caractere){
    printf("A palavra sem '%c' eh :", caractere);
    char c;
    for(int i = 0; i < tamanho; i++){
        c = toupper(palavra[i]);
        if(c == caractere || c == caractere - 32) continue;
        else printf("%c", palavra[i]);
    }
    printf("\n");
}