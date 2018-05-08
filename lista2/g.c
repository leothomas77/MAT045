//Lista 2 Questao G
#include <stdio.h>

int main()
{
    int n, s, movimentacao;
    scanf("%d %d", &n, &s);
    
    if (n < -1 || n > 30) {
        return 0;
    } 
    
    if (s < -1000 || s > 1000) {
        return 0;
    }
    
    int i = 0;
    while (i < n) {
        scanf("%d", &movimentacao);
        if (movimentacao >= -1000 && movimentacao <= 1000) {
            s += movimentacao;
        }
        i++;
    }
    printf("%d", s);
    
    return 0;
}
