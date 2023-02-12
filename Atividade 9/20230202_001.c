#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ALUNOS 4
#define EQUIPE 5

int main()
{
    char aluno[EQUIPE][ALUNOS][120];
    for(int i = 0; i < EQUIPE; i++){
        printf("Digite os nomes dos alunos da equipe %d: \n", i + 1);
        for(int j = 0; j < ALUNOS; j++){
            int tam;
            gets(&aluno[i][j]);
            tam = strlen(aluno[i][j]);
            for(int k = 0; k < tam; k++){
                aluno[i][j][k] = toupper(aluno[i][j][k]);
            }
        }
    }
    char nome[120];
    printf("Digite o nome que deseja procurar: \n");
    gets(nome);
    int tam;
    tam = strlen(nome);
    for(int i = 0; i < tam; i++){
        nome[i] = toupper(nome[i]);
    }
    for(int i = 0; i < EQUIPE; i++){
        for(int j = 0; j < ALUNOS; j++){
            if(strcmp(nome, aluno[i][j]) == 0){
                printf("O aluno pertence a equipe %d\n", i + 1);
            }
        }
    }
    return 0;
}
