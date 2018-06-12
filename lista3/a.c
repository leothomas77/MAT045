#include <stdio.h>

int main() {
    int A, B, totalA = 0, totalB = 0, R, index = 1;
    while(1) {
        scanf("%d", &R);
        if (R == 0) break;

        for (int i = 0; i < R; i++) {
            scanf("%d%d", &A, &B);
            totalA += A;
            totalB += B;        
        }

        printf("Teste %d\n", index);
        if (totalA > totalB) {
            printf("Aldo\n\n");
        } else {
            printf("Beto\n\n");
        }
        index++;
    }
    return 0;
}
