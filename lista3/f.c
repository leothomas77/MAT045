#include <stdio.h>
#define MAX 200
int main() {
    int N = 1, nota, notas[MAX], frequencias[MAX], maiorFrequencia = 0, notaMaiorFrequencia;
    
    for (int i = 0; i < MAX; i++) {
        notas[i] = -1;        
        frequencias[i] = 0;
    }

    while(N != 0) {
        scanf("%d", &N);
        for (int i = 0; i < N; i++) {
            int nota;
            scanf("%d", &nota);
            for (int j = 0; j < N && j < MAX; j++) {
                if (notas[j] == -1) {
                    notas[j] = nota;
                    break;
                } else if (notas[j] == nota) {
                    frequencias[j] = frequencias[j] + 1;
                    break;
                }
            }
                
        }
        
        notaMaiorFrequencia = notas[0];
        for (int i = 0; i < N; i++) {
            if (frequencias[i] > maiorFrequencia) {
                maiorFrequencia = frequencias[i];
                notaMaiorFrequencia = notas[i];
            }
        }
        printf("%d\n", notaMaiorFrequencia);
    }

}
