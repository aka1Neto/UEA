int main(){
    int numeros[20], temp;
    
    for(int i = 0; i < 20; i++){
        printf("Digite o numero %d: \n", i + 1);
        scanf("%d", &numeros[i]);
    }
    
    for(int i = 0; i < 20; i++){
        
        for(int j = 0; j < 20; j++){
            
            if(numeros[i] < numeros[j]){
                temp = numeros[j];
                numeros[j] = numeros[i];
                numeros[i] = temp;
                
            }
        }
    }

    printf("O maior numero eh %d\n", numeros[0]);
    printf("O menor numero eh %d\n", numeros[19]);
    return 0;
}