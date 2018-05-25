
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n < 0 || n > 100) {
        printf("Fora da faixa");
        return 0;
    }
    
    if (n == 0) {
        printf("E");
    } else if (n > 0 && n <= 35) {
        printf("D");
    } else if (n > 35 && n <= 60) {
        printf("C");
    } else if (n > 61 && n <= 85) {
        printf("B");
    } else {
        printf("A");
    } 
    return 0;
}
