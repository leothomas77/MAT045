/*
Entrada:
20 4
143 10
42 5
80 3
0 0

Saída:
Poodle
Pooooooooooodle
Pooooodle
Poooooooooooooooodle
*/
#include <stdio.h>
#define MAX 100
int main() {
    int N[MAX], P[MAX], paginas, paginaFinal, index = 0;
    int n, p;
    do {
        scanf("%d %d", &n, &p);
        if (n == 0 && p == 0) {
            break;        
        }
        N[index] = n;
        P[index] = p;
        index++;
    } while(n != 0 && p != 0);

    for (int i = 0; i < index; i++) {
        printf("Poo");
        
        paginas = N[i] / P[i];
        
        if (paginas < 6) {
            paginas = 0;
        } else if (paginas > 20) {
            paginas = 20;
        } else if (N[i] % P[i] != 0) {
            paginas++;
        }

        paginas = paginas - 6;

        while(paginas > 0) {
            printf("o");
            paginas--;
        }

        printf("dle\n");
    }
    return 0;
}
