//Lista 2 Questao B
#include <stdio.h>
#define RETRATO 0
#define PAISAGEM 1
int main()
{
    int x, y, l, h;
    int orientacaoPagina, orientacaoFoto;
    
    
    scanf("%d %d", &x, &y);
    if (y > x) {
        orientacaoPagina = RETRATO
    } else {
        orientacaoPagina = PAISAGEM;
    }

    for (int i = 0; i < 2; i++) {
        scanf("%d %d", &l, &h);
        
        if (l > h) {
            orientacaoFoto = RETRATO
        } else {
            orientacaoFoto = PAISAGEM;
        }
        
        if (orientacaoPagina == RETRATO) {
                    
        } else {
            
        }

    }

    if (x >= 0 && y >= 0) {
        printf("S %d %d\n", x, y);
    } else {
        printf("N %d %d\n", x, y);
    }
    
    return 0;
}
