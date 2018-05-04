
//Lista 2 Questao E
#include <stdio.h>

int main()
{
    int n, l, c;
    scanf("%d", &n);
    
    int i = 0;
    int quebrados = 0;
    while (i < n) {
        scanf("%d %d", &l, &c);
        if (l > c) {
            quebrados = quebrados + c;
        }
        i++;
    }
    printf("%d", quebrados);
    
    return 0;
}

