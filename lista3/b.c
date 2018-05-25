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

int main() {
    int N, P, paginas, paginaFinal;
    do {    
        scanf("%d %d", &N, &P);
        if (N == 0 && P == 0) {
            break;        
        }

        printf("Poo");
        
        paginas = N / P;
        paginaFinal = 0;
        if (N % P) {
            paginaFinal = 1;
        }

        if (paginas > 6) {
            paginas = paginas + paginaFinal - 6;
            if (paginas > 20) {
                paginas = 14;
            }

            while(paginas > 0) {
                printf("o");
                paginas--;
            }
        }

        printf("dle\n");
    } while(N != 0 && P != 0);
    return 0;
}


