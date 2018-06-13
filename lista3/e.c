#include <stdio.h>
#define MAX 100

int main() {
    int N = 1, territorio, territorios[MAX], somaMetade = 0, somaTotal = 0;
    for (int i = 0; i < MAX; i++) {
        territorios[i] = 0;
    }

    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &territorio);
        territorios[i] = territorio;
        somaTotal = somaTotal + territorios[i];
    }
    
    int i = 0;
    for(i = 0; i < N; i++) {
        somaMetade = somaMetade + territorios[i];
        if (somaMetade == somaTotal / 2) {
            break;
        }
    }
    
    printf("%d", i + 1);

    return 0;
}
