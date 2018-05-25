#include <stdio.h>

int main() {
    int N = 1, cont = 1, ingresso, premiado;

    
    while(N != 0) {
        scanf("%d", &N);
        if (N == 0) {
            break;        
        }

        for (int i = 1; i <= N; i++) {
            scanf("%d", &ingresso);
            if (ingresso == i) {
                premiado = i;            
            }
        }
        printf("Teste %d\n", cont);
        printf("%d\n\n", premiado);
        cont++;
    }

    return 0;

}
