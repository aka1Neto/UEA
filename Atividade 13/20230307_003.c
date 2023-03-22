#include <stdio.h>
#include <string.h>

int main()
{
    int a = 3;
    int* b = &a;
    
    float c = 45;
    float* d = &c;
    
    char e[100] = "Baunilha";
    char* f = e;

    *(b) = 5;
    *(d) = 50;
    strcpy(f, "Chocolate");
    
    printf("%d %.2f %s\n", a, c, e);
    return 0;
}
