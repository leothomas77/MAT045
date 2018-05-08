//Lista 2 Questao D - álbum de fotos
#include <stdio.h>
int main()
{
    int x, y, l1, h1, l2, h2;
    int posicao1, posicao2, posicao3, posicao4;
    
    scanf("%d %d", &x, &y); // dimensoes da pagina
    
    scanf("%d %d", &l1, &h1); // dimensoes da foto 1
    scanf("%d %d", &l2, &h2); // dimensoes da foto 2
    
    posicao1 = posicao2 = posicao3 = posicao4 = 0;
    
    //posicao 1
    if ((l1 + l2) <= x && h1 <= y && h2 <= y) {
        posicao1 = 1;
    }
    
    //posicao 2
    if ((l1 + h2) <= x && h1 <= y && l2 <= y) {
        posicao2 = 1;
    }
    
    //posicao 3
    if ((h1 + l2) <= x && l1 <= y && h2 <= y) {
        posicao3 = 1;
    }
    
    //posicao 4
    if ((h1 + h2) <= x && l1 <= y && l2 <= y) {
        posicao4 = 1;
    }
    
    
    if (posicao1 || posicao2 || posicao3 || posicao4) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}
