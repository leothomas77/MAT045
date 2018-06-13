#include <stdio.h>
#define MAX 100

int main() {
    int A, V, X, Y, voos_aeroportos[MAX], index = 1;
    int maiorFrequencia = 0;
    for( ; ; ) {
        for (int i = 0; i < MAX; i++) {
            voos_aeroportos[i] = 0;
        }   

        scanf("%d%d", &A, &V);
        if (A == 0  && V == 0) {
            break;
        }
        
        for(int i = 0; i < V; i++) {
            scanf("%d%d", &X, &Y);
            voos_aeroportos[X]++;
            voos_aeroportos[Y]++;
        }

        for (int i = 1; i <= A; i++) {
            if (voos_aeroportos[i] > maiorFrequencia) {
                maiorFrequencia = voos_aeroportos[i];
            }
        }
        
        int cont = 0;
        printf("Teste %d\n", index);
        for(int i = 1; i <= A; i++) {
            if (voos_aeroportos[i] == maiorFrequencia) {
                if (cont == 0) {
                    printf("%d ", i);
                } else {
                    printf(" %d", i);
                }
                cont++;
            }
        }
        printf("\n\n");
        index++;

    }

    return 0;
}
