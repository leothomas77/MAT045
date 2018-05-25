#include <stdio.h>

int main()
{
    float A, G, Ra, Rg;

    scanf("%f %f %f %f", &A, &G, &Ra, &Rg);
    //printf("%3.2f %3.2f", A / Ra , G / Rg);
    if (A / Ra > G / Rg) {
        printf("G\n");
    } else if (A / Ra < G / Rg) {
        printf("A\n");
    } else {
        printf("Tanto faz");
    }
    return 0;
}
