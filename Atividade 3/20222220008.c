#include <stdio.h>

int main(){
    float maior_nota[3], maior_m = 0;
    float menor_nota[3], menor_m = 10;
    
    for(int i = 0; i < 3; i++){
        maior_nota[i] = 0;
        menor_nota[i] = 10;
    }
    
    while(1){
        
        float media, nota, soma = 0;
        
        for(int i = 0; i < 3; i++){
            printf("Digite a nota %d: \n", i + 1);
            scanf("%f", &nota);
            
            while(nota < 0 || nota > 10){
                printf("Nota invalida, digite um valor entre 0 e 10\n");
                scanf("%f", &nota);
            }
            
            soma += nota;
            
            if(nota > maior_nota[i]) maior_nota[i] = nota;
            if(nota < menor_nota[i]) menor_nota[i] = nota;
            
        }
        
        media = soma / 3;
        
        if(media > maior_m) maior_m = media;
        if(media < menor_m) menor_m = media;
        
        char resposta;
        printf("Deseja adicionar outro aluno? Digite 's' para sim.\n");
        scanf("%s", &resposta);
        
        if(resposta != 83 && resposta != 115) break;
    }
    
    for(int i = 0; i < 3; i++){
        printf("A maior e menor nota do exercicio %d sao %.2f e %.2f\n", i+1, maior_nota[i], menor_nota[i]);
    }
    
    printf("A maior e menor media sao %.2f e %.2f\n", maior_m, menor_m);
    
    return 0;
}