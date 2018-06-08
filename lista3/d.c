#include <stdio.h>
#define MAX 100

int main() {
    int A, V, X, Y, V[MAX][MAX];
    for( ; ; ) {
        for (int i = 0; i < MAX; i++)
            for (int j = 0; j < MAX; j++)
                V[i][j] = 0;
        
        
        scanf("%d%d", &A, &V);
        if (A == 0 && V == 0) {
            break;
        }
        
        for(int i = 0; i < A; i++) {
            scanf("%d%d", &X, &Y);
            V[X][Y]++;
        }
    }
    return 0;
}
