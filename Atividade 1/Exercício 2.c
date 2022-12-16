#include <stdio.h>
#include <stdlib.h>

int main(){
    char sexo, nome[60];
    int idade;
    printf("Digite seu nome: \n");
    scanf("%s", &nome);
    printf("Digite o sexo. M ou F: \n");
    scanf("%s", &sexo);
    printf("Digite a idade: \n");
    scanf("%d", &idade);
    if (sexo == 'm' || sexo == 'M'){
        printf("Nao eh mulher.\n");
    }
    else printf("Eh mulher.\n");
    return 0;
}