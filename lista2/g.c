//Lista 2 Questao G
#include <stdio.h>

int main()
{
    int n, s, menor_saldo, movimentacao;
    scanf("%d %d", &n, &s);
    
    if (n < -1 || n > 30) {
        return 0;
    } 
    
    if (s < -1000 || s > 1000) {
        return 0;
    }
    
    int i = 0;
    menor_saldo = s;
    while (i < n) {
        scanf("%d", &movimentacao);
        if (movimentacao >= -1000 && movimentacao <= 1000) {
            s += movimentacao;
        }
        
        if (s < menor_saldo) {
            menor_saldo = s;    
        }
        
        i++;
    }
    printf("%d", menor_saldo);
    
    return 0;
}
