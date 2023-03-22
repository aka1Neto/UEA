#include <stdio.h>

int sort(int* a, int* b, int* c);

int main()
{
    int a = 3, b = 2, c = 1;
    int resultado = sort(&a, &b, &c);
    if(resultado == 1) printf("Os numeros sao iguais.\n");
    else{
        printf("Os numeros ordenados sao: ");
        printf("%d %d %d\n", a, b, c);
    }
    return 0;
}

int sort(int* a, int* b, int* c){
    if(*a == *b && *b == *c) return 1;
    else{
        int aux;
        if(*a > *b){
            aux = *a;
            *a = *b;
            *b = aux;
        }
        
        if(*b > *c){
            aux = *b;
            *b = *c;
            *c = aux;
        }
        
        if(*a > *b){
            aux = *a;
            *a = *b;
            *b = aux;
        }
        return 0;
    }
}
