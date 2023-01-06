#include <stdio.h>
#include <math.h>

int main(){
    int n, c1, c2, hip;
    printf("Digite o maior valor para a hipotenusa: \n");
    scanf("%d", &n);

    for(hip = 1; hip <= n; hip++){
        for(c1 = 1; c1 < hip; c1++){
            for(c2 = c1; c2 < hip; c2++){
                if(c1 * c1 + c2 * c2 == hip * hip){
                    printf("Os catetos sao %d e %d. A hipotenusa eh %d\n", c1, c2, hip);
                    break;
                }
            }
        }
    }
    return 0;
}