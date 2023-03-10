#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QTD_JGD 23

int main()
{

    char jogadores[QTD_JGD][2][100] = {"Goleiro", "Hugo Souza",
                                "Goleiro", "Hugo Souza",
                                "Goleiro", "Hugo Souza",
                                "Defesa", "Rodrigo Caio",
                                "Defesa", "Rodrigo Caio",
                                "Defesa", "Rodrigo Caio",
                                "Defesa", "Rodrigo Caio",
                                "Defesa", "Rodrigo Caio",
                                "Defesa", "Rodrigo Caio",
                                "Defesa", "Rodrigo Caio",
                                "Meia", "Everton Ribeiro",
                                "Meia", "Everton Ribeiro",
                                "Meia", "Everton Ribeiro",
                                "Meia", "Everton Ribeiro",
                                "Meia", "Everton Ribeiro",
                                "Meia", "Everton Ribeiro",
                                "Meia", "Everton Ribeiro",
                                "Meia", "Everton Ribeiro",
                                "Atacante", "Gabi"
                                "Atacante", "Gabi"
                                "Atacante", "Gabi"
                                "Atacante", "Gabi"
                                "Atacante", "Gabi"};

    float avaliacao[QTD_JGD] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1,
                                10, 9, 8, 7, 6, 5, 4, 3, 2, 1,
                                10, 9, 8};


    for(int i = 0; i < QTD_JGD; i++){
        for(int j = 0; j < QTD_JGD; j++){
            if(avaliacao[i] > avaliacao[j]){
                float aux_a;
                char aux_p[100], aux_n[100];

                aux_a = avaliacao[i];
                avaliacao[i] = avaliacao[j];
                avaliacao[j] = aux_a;

                strcpy(aux_p, jogadores[i][0]);
                strcpy(jogadores[i][0], jogadores[j][0]);
                strcpy(jogadores[j][0], aux_p);

                strcpy(aux_n, jogadores[i][1]);
                strcpy(jogadores[i][1], jogadores[j][1]);
                strcpy(jogadores[j][1], aux_n);
            }
        }
    }
    for(int i = 0; i < QTD_JGD; i++){
        printf("%.2f\n", avaliacao[i]);
    }
    return 0;

}
