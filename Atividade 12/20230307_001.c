#include <stdio.h>

void print_vet(float* start, float* end);

int main()
{
    float a[3] = {1, 2, 3};
    float b[4] = {1, 2, 3, 4};
    float c[5] = {1, 2, 3, 4, 5};
    print_vet(&a[0], &a[2]);
    print_vet(&b[0], &b[3]);
    print_vet(&c[0], &c[4]);
}

void print_vet(float* start, float* end){
    for(float* i = start; i <= end; i++){
        printf("%f\n", *(i));
    }
    printf("\n");
}
