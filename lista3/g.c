#include <stdio.h>
#define MAX 100

int main() {
    int N, M, tabuleiro[MAX], minas[MAX];
    for (int i = 0; i < MAX; i++) {
        tabuleiro[i] = 0;
        minas[i] = 0;
    }

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &M);
        tabuleiro[i] = M;
    }
    
    for (int i = 0; i < N; i++) {
        
        if (tabuleiro[i] == 1) {
            minas[i]++;
        }
        
        if (i > 0 && tabuleiro[i - 1] == 1) {
            minas[i]++;
        }
        
        if (i < N - 1 && tabuleiro[i + 1] == 1) {
            minas[i]++;
        }
        
    }
    
    for(int i; i < N; i++) {
        printf("%d\n", minas[i]);
    }
    
    return 0;
}
