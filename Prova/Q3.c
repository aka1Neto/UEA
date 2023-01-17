#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int scan_pos();
int hiperfatorial(int n);
void resposta(int n, int hiper);

int main()
{
    int n, hiper;
    n = scan_pos();
    hiper = hiperfatorial(n);
    resposta(n, hiper);
    return 0;
}

int scan_pos(){
    int n, loop = 1;
    while(loop){
        scanf("%d", &n);
        if(n >= 1) loop = 0;
    }
    return n;
}

int hiperfatorial(int n){
    int hiper = 1;
    for(int i = 1; i <= n; i++){
        hiper *= pow(i,i);
    }
    return hiper;
}

void resposta(int n, int hiper){
    printf("O hiperfatorial de %d eh %d", n, hiper);
}
