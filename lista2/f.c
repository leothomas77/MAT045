
//Lista 2 Questao F
#include <stdio.h>

int main()
{
    int n, t, v;
    scanf("%d", &n);
    
    int i = 0;
    int distancia = 0;
    while (i < n) {
        // v = d / t; d = v * t
        scanf("%d %d", &t, &v);
        distancia += t * v;
        i++;
    }
    printf("%d", distancia);
    
    return 0;
}

