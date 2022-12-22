#include <stdio.h>

int main(){
    int valor, valor_max = 0, x_max, y_max, m, n;
    printf("Digite os valores maximos de x e y, respectivamente: \n");
    scanf("%d%d", &m, &n);
    for(int x = 0; x <= m; x++){
        for(int y = 0; y <= n; y++){
            valor = x*y - x*x + y;
            if(valor_max < valor){
                valor_max = valor;
                x_max = x;
                y_max = y;
            }
        }
    }

    printf("O maior valor da equacao foi obtido com x: %d e y: %d\n", x_max, y_max);   
    return 0;
}