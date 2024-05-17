#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char p[2][2][100];
    for(int i = 0; i < 2; i++){
        printf("Digite o nome do paciente %d: \n", i+1);
        scanf("%s", &p[i][0]);
        printf("Digite a prioridade do paciente %d: \n", i+1);
        scanf("%s", &p[i][1]);
    }

    int prioridade = 0, aux= 0;
    char nome[100];
    printf("Digite o nome que deseja procurar: \n");
    scanf("%s", &nome);

    for(int i = 0; i < 2; i++){
        if(strcasecmp(p[i][0], nome) == 0){
            printf("A posicao na fila eh %d\n", i + 1);
        }
        if(strcasecmp(p[i][1], "S") == 0) prioridade++;
    }

    char novo[prioridade][2][100];
    for(int i = 0; i < 2; i++){
        if(strcasecmp(p[i][1], "S") == 0){
            strcpy(novo[aux][0], p[i][0]);
            novo[aux][1] = {"S"};
            aux++;
        }
    }
    for(int i = 0; i < 2; i++){
        printf("%s %s\n", &novo[i][0], &novo[i][1]);
    }
    return 0;
}
