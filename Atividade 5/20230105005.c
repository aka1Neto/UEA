#include <stdio.h>
#include <stdlib.h>


int fib(int n);

int main()
{
    int n, Fn;
    printf("Digite n: \n");
    scanf("%d", &n);
    Fn = fib(n);
    printf("O fatorial de %d eh %d\n", n, Fn);
}

int fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    int Fn = 0, ant = 0, prox = 1;
    for(int i = 0; i < n - 2; i++){
        Fn = ant + prox;
        ant = prox;
        prox = Fn;
    }
    return Fn;
}