/*
Entrada:
20 4
143 10
42 5
80 3
0 0

Saída:
Poodle
Poodle
Pooooooooooodle
Pooooooooooodle
Pooooodle
Pooooodle
Poooooooooooooooodle
Poooooooooooooooodle


20 4
143 10
42 5
80 3
0 0


*/
#include <stdio.h>
#define MAX 100
int main() {
    int n, p, paginas, paginaFinal, index = 0;
    while(1) {
        scanf("%d %d", &n, &p);
        if (n == 0 && p == 0) {
            break;        
        }

        printf("Poo");
        
        paginas = n / p;
        
        if (n % p != 0) {
            paginas++;
        } 
        if (paginas < 6) {
            paginas = 0;
        } 

        paginas = paginas - 6;

        if (paginas > 14) {
            paginas = 14;
        }

        while(paginas > 0) {
            printf("o");
            paginas--;
        }

        printf("dle\n");
    }

    return 0;
}
