#include <stdio.h>
#define MAX 101
int main() {
    int N = 1, nota, frequencias[MAX], notaMaiorFrequencia, maiorFrequencia;
    
    for (int i = 0; i < MAX; i++) {
        frequencias[i] = 0;
    }

    while(N != 0) {
        scanf("%d", &N);
        if (N == 0) break;
        
        notaMaiorFrequencia = -1;
        maiorFrequencia = 0;
        for (int i = 0; i < N; i++) {
            int nota;
            scanf("%d", &nota);
            frequencias[nota]++;
            
            if(frequencias[nota] >= maiorFrequencia) {
                maiorFrequencia = frequencias[nota];
                notaMaiorFrequencia = nota;
            }
        }
        
        printf("%d\n", notaMaiorFrequencia);
    }

}
