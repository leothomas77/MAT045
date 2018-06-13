#include <stdio.h>
#define MAX 100

int main() {
    int N, M, P, D, pedras[MAX];
    for (int i = 0; i < MAX; i++) {
        pedras[i] = 0;
    }

    scanf("%d%d", &N, &M);

    for (int i = 0; i < M; i++) {
        scanf("%d%d", &P, &D);
        for (int j = P - 1; j < N; j = j + D) {
            pedras[j] = 1;
        }

        for (int j = P - 1; j >= 0; j = j - D) {
            pedras[j] = 1;
        }

    }
    
    for (int i = 0; i < N; i++) {
        printf("%d\n", pedras[i]);
    }
    
    return 0;
}
