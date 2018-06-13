#include <stdio.h>
#define MAX 101
int main() {
    int N = 1, nota, frequencias[MAX], maiorFrequencia;
    
    for (int i = 0; i < MAX; i++) {
        frequencias[i] = 0;
    }

        
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &nota);
        
        frequencias[nota]++;
        if(frequencias[nota] >= maiorFrequencia) {
            maiorFrequencia = frequencias[nota];
        }
    }
    
    int i;
    for (i = MAX - 1; i > 0 ; i--) {
        if (frequencias[i] == maiorFrequencia) {
            break;
        }
    }
    
    printf("%d\n", i);

}
