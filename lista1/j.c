#include <stdio.h>

int main()
{
    int n;
    int valor = 7;
    scanf("%d", &n);
    
    if (n < 0 || n > 1000) {
        printf("Fora da faixa");
        return 0;
    }

    if (n > 10 && n <= 30) {
        valor = valor + (n - 10) * 1;
    } else if (n > 30 && n <= 100) {
        valor = valor + 20 + (n - 30) * 2;
    } else if (n > 100) {
        valor = valor + 20 + 140 + (n - 100) * 5;
    }
    
    
    printf("%d", valor);
    return 0;
}
