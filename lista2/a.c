//Lista 2 Questao B
#include <stdio.h>

int main()
{
    int quant;
    int x1, y1, x2, y2;
    
    scanf("%d", &quant);
    
    int i, d;
    i = d = 0;
    while (i < quant) {
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        d = d + (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        i++;
    }
    
    printf("%d", d);
    return 0;
}

