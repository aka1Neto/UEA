#include <stdio.h>
#include <stdlib.h>


int fatorial(int n);

int main()
{
    int n, fat;
    printf("Digite n: \n");
    scanf("%d", &n);
    fat = fatorial(n);
    printf("O fatorial de %d eh %d\n", n, fat);
}

int fatorial(int n){
    int fat = 1;
    for(int i = 1; i <= n; i++){
        fat *= i;
    }
    return fat;
}
