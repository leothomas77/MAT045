#include <stdio.h>
#define MAX 100

int main() {
    int A, V, X, Y, voos_aeroportos[MAX], index = 1;
    int maiorFrequencia = -1;
    int resultados[MAX];
    for( ; ; ) {
        for (int i = 0; i < MAX; i++) {
            voos_aeroportos[i] = 0;
            resultados[i] = 0;
        }

        scanf("%d%d", &A, &V);
        if (A == 0  && V == 0) break;

        for(int i = 0; i < V; i++) {
            scanf("%d%d", &X, &Y);
            voos_aeroportos[X]++;
            voos_aeroportos[Y]++;
            
            if (voos_aeroportos[X] > maiorFrequencia) {
                maiorFrequencia = voos_aeroportos[X];
            }
    
            if (voos_aeroportos[Y] > maiorFrequencia) {
                maiorFrequencia = voos_aeroportos[Y];
            }
        }

        printf("Teste %d\n", index);
        for(int i = 0; i < A; i++) {
            if (voos_aeroportos[i] == maiorFrequencia) {
                printf("%d ", i);
            }
        }
        printf("\n");

        index++;

    }

    return 0;
}
