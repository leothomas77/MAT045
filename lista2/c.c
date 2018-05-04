
// Lista 2 Questao C
// referencia: http://spojtricks.blogspot.com.br/2016/02/tapete14-tapetes.html
#include <stdio.h>

int main()
{
    int l, n;
    scanf("%d %d", &l, &n);
    printf("%d", (l-n+1) * (l-n+1) + (n - 1));
    return 0;
}

