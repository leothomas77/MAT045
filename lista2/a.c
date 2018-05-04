//Lista 2 Questao A
#include <stdio.h>

int main()
{
    int xm, ym, xr, yr, dx, dy;
    
    scanf("%d %d %d %d", &xm, &ym, &xr, &yr);
    
    dx = xm - xr;
    dy = ym - yr;
    
    if (dx < 0) {
        dx = -1 * dx;
    }
    
    if (dy < 0) {
        dy = -1 * dy;
    }

    printf("%d", dx + dy);
    return 0;
}
