#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define QTD 5

void print_nomes(char nomes[][120]);
void print_sem_nome(char nomes [][120]);

int main()
{
    char nomes[QTD][120];
    for(int i = 0; i < QTD; i++){
        printf("Digite o nome %d: \n", i + 1);
        gets(nomes[i]);
    }
    print_nomes(nomes);
    print_sem_nome(nomes);
    return 0;
}

void print_nomes(char nomes[][120]){
    for(int i = 0; i < QTD; i++){
        printf("O nome %d eh %s\n", i + 1, nomes[i]);
    }
}

void print_sem_nome(char nomes [][120]){
    char nome[120];
    printf("Digite o nome que deseja eliminar: \n");
    gets(nome);
    printf("A lista sem o nome eliminado eh: \n");
    for(int i = 0; i < QTD; i++){
        if(strcasecmp(nome, nomes[i]) != 0) printf("%s\n", nomes[i]);
    }

}