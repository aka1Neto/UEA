#include <stdio.h>

int main()
{
    char data[10];
    int form = 0, dia = 0, mes = 0, ano = 0;
    printf("Digite a data: \n");
    scanf("%s", &data);
    
    for(int i = 0; i < 10; i++){
        if(i == 2 || i == 5){
            if(data[i] != '/'){
                form = 1;
                break;
            } 
        }
        else{
            if(data[i] < 48 || data[i] > 57){
                form = 1;
                break;
            }
        }
    }
    
    if(form == 1) printf("O formato da data esta errado\n");
    
    else{
        int num = 1000;
        dia = (data[0] - 48) * 10 + (data[1] - 48);
        mes = (data[3] - 48) * 10 + (data[4] - 48);
        for(int i = 6; i < 10; i++){
            ano += (data[i] - 48) * num;
            num /= 10;
        }
        printf("Dia %d do mes %d do ano de %d\n", dia, mes, ano);
    }
}