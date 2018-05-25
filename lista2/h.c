//Lista 2 Questao H
#include <stdio.h>

int main()
{
    int n, c, s, e, capacidade_utilizada;
    char saida = 'N';
    scanf("%d %d", &n, &c);
    
    int i = 0;
    capacidade_utilizada = 0;
    while (i < n) {
        scanf("%d %d", &s, &e);
        capacidade_utilizada = capacidade_utilizada + e - s;
        
        if (capacidade_utilizada > c) {
            saida = 'S';
        }
        
        i++;
    }
    
    printf("%c\n", saida);
    return 0;
}
