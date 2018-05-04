
//Lista 2 Questao H
#include <stdio.h>

int main()
{
    int n, c, s, e, capacidade_utilizada;
    scanf("%d %d", &n, &c);
    
    int i = 0;
    capacidade_utilizada = 0;
    while (i < n) {
        scanf("%d %d", &s, &e);
        capacidade_utilizada = capacidade_utilizada + e - s;
        i++;
    }
    
    if (capacidade_utilizada > c) 
    {
        printf("S\n");
    } 
    else
    {
        printf("N\n");
    }
    return 0;
}

