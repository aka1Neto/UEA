    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        int n;
        while(1){
            printf("Digite o numero de elementos dos vetores?\n");
            scanf("%d", &n);
            if(n>=1 && n<= 100) break;
            else printf("Digite um numero entre 1 e 100");
        }
        float veta[n], vetb[n];
        for(int i = 0; i < n; i++){
            printf("Digite o numero %d do vetor a: \n", i+1);
            scanf("%f", &veta[i]);
        }
        for(int i = 0; i < n; i++){
            printf("Digite o numero %d do vetor b: \n", i+1);
            scanf("%f", &vetb[i]);
        }
        print_escalar(veta, vetb, n);
        return 0;
    }
    void print_escalar(float* veta, float* vetb, int tam){
        float soma = 0;
        for(int i = 0; i < tam; i++){
            soma += veta[i] * vetb[i];
        }
        printf("O produto escalar dos vetores A e B eh: %.2f\n", soma);
    }