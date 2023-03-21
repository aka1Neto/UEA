#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add1(char alunos[][2][120], float notas[]);
void new_stud(char alunos[][2][120], float notas[], 
            char n_alunos[][2][120], float n_notas[]);

int main()
{
    char team1[6][2][120] = {"Carla", "F",
                            "Joao", "M",
                            "Sara", "F",
                            "Arthur", "M",
                            "Maria", "F",
                            "Bruno", "M"};
                            
    float nota1[6] = {10, 9, 8, 7, 6, 5};
    
    char team2[6][2][120] = {"Carla", "F",
                            "Joao", "M",
                            "Sara", "F",
                            "Arthur", "M",
                            "Maria", "F",
                            "Bruno", "M"};
                            
    float nota2[6] = {10, 9, 8, 7, 6, 5};
    
    int qtd1 = 0, qtd2 = 0;
    int proj = 0;
    
    for(int i = 0; i < 6; i++){
        if(strcasecmp(team1[i][1], "F") == 0){
            qtd1++;
            if(nota1[i] >= 8) proj++;
        }       
        if(strcasecmp(team2[i][1], "F") == 0){
            qtd2++;
            if(nota2[i] >= 8) proj++;
        }
    }
    
    if(qtd1 > qtd2) printf("A equipe 1 tem mais mulheres.\n");
    else if(qtd1 < qtd2) printf("A equipe 2 tem mais mulheres.\n");
    else printf("As equipe tem a mesma quantidade de mulheres.\n");
    printf("\n");

    char projeto[proj][120];
    int x = 0;
    for(int i = 0; i < 6; i++){
        if(nota1[i] >= 8){
            if(strcasecmp(team1[i][1], "F") == 0){
                strcpy(projeto[x], team1[i][0]);
                x++;
            }
        }
        if(nota2[i] >= 8){
            if(strcasecmp(team2[i][1], "F") == 0){
                strcpy(projeto[x], team2[i][0]);
                x++;
            }
        }
    }
    
    printf("As alunas que podem participar do projeto sao: \n");
    for(int i = 0; i < proj; i++){
        printf("%s\n", projeto[i]);
    }
    printf("\n");
    
    
    printf("As novas notas são: \n");
    add1(team2, nota2);
    for(int i = 0; i < 6; i++){
        printf("%.2f\n", nota2[i]);
    }
    printf("\n");
    
    char n_team[7][2][120];
    float n_nota[7];
    new_stud(team2, nota2, n_team, n_nota);
    for(int i = 0; i < 7; i++){
        printf("%s %s %.2f\n", n_team[i][0], n_team[i][1], n_nota[i]);
    }
    
    return 0;
}

void add1(char alunos[][2][120], float notas[]){
    for(int i = 0; i < 6; i++){
        if(strcasecmp(alunos[i][1], "F") == 0){
            notas[i] += 1;
            if(notas[i] > 10) notas[i] = 10;
        }
    }
}

void new_stud(char alunos[][2][120], float notas[], 
            char n_alunos[][2][120], float n_notas[]){
    for(int i = 0; i < 6; i++){
        strcpy(n_alunos[i][0], alunos[i][0]);
        strcpy(n_alunos[i][1], alunos[i][1]);
        n_notas[i] = notas[i];
    }
    printf("Digite o nome do novo aluno: \n");
    scanf("%s", & n_alunos[6][0]);
    printf("Digite o sexo do novo aluno: \n");
    scanf("%s", & n_alunos[6][1]);
    printf("Digite a nota do novo aluno: \n");
    scanf("%f", & n_notas[6]);
}
