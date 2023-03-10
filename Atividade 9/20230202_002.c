#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QTD 5

void print_nomes(char nomes[][120]);
void print_sem_nome(char nomes [][120]);
void print_ordem_alf(char nomes[][120]);

int main()
{
    char nomes[QTD][120];
    for(int i = 0; i < QTD; i++){
        printf("Digite o nome %d: \n", i + 1);
        gets(nomes[i]);
    }
    print_nomes(nomes);
    printf("\n");
    print_sem_nome(nomes);
    printf("\n");
    print_ordem_alf(nomes);
    return 0;
}

void print_nomes(char nomes[][120]){
    for(int i = 0; i < QTD; i++){
        printf("O nome %d eh %s\n", i + 1, nomes[i]);
    }
}

void print_sem_nome(char nomes[][120]){
    char nome[120];
    printf("Digite o nome que deseja eliminar: \n");
    gets(nome);
    printf("A lista sem o nome eliminado eh: \n");
    for(int i = 0; i < QTD; i++){
        if(strcasecmp(nome, nomes[i]) != 0) printf("%s\n", nomes[i]);
    }

}

void print_ordem_alf(char nomes[][120]){
    char nome[120];
    char nomes_alf[QTD][120];
    for(int i = 0; i < QTD; i++){
        for(int j = 0; j < QTD; j++){
            if(strcasecmp(nomes[i], nomes[j]) < 0){
                strcpy(nome, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], nome);
            }
        }
    }
    
    for(int i = 0; i < QTD; i++){
        strcpy(nomes_alf[i], nomes[i]);
        printf("%s\n", &nomes_alf[i]);
    }
}