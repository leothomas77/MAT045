#include <stdio.h>
#define MAX 100

int main() {
    int A, V, X, Y, voos_aeroportos[MAX], index = 0;
    int resultados[MAX];

    for (int i = 0; i < MAX; i++) {
        resultados[i] = 0;
    }
    
    for( ; ; ) {
        for (int i = 0; i < MAX; i++) {
            voos_aeroportos[i] = 0;
        }

        scanf("%d%d", &A, &V);
        if (A == 0  && V == 0) break;

        for(int i = 0; i < V; i++) {
            scanf("%d%d", &X, &Y);
            voos_aeroportos[X]++;
            voos_aeroportos[Y]++;
        }

        int maiorFrequencia = 0;
        for(int i = 0; i < A; i++) {
            if (voos_aeroportos[i] > maiorFrequencia) {
                maiorFrequencia = voos_aeroportos[i];
            }
        }

        resultados[index] = maiorFrequencia;
        index++;

    }

    for (int i = 0; i < index; i++) {
        printf("Teste %d\n", i + 1);
        printf("%d\n\n", resultados[i]);
    }
    return 0;
}
