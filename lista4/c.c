#include <stdio.h>
#include <string.h>
#define MAX 15

int main() {
    int minCaracteres, minMinusculas, quantMaiusculas, quantNumeros; 
    int contMinusculas = 0, contMaiusculas = 0, contNumeros = 0, tam = 0; 
    char senha[MAX], ufa[7] = "Ufa :)", bad[6] = "Ok =/";

    scanf("%d %d %d %d", &minCaracteres, &minMinusculas, &quantMaiusculas, &quantNumeros);
    scanf("%s", senha);
    tam = strlen(senha);
    
    if (tam < minCaracteres) {
        printf("%s\n", ufa);
        return 0;
    } 
    
    
    for (int i = 0; i < tam; i++) {
        char ch = senha[i];
        
        if (ch >= 'a' && ch <= 'z') {
            contMinusculas++;
        }
        
        if (ch >= 'A' && ch <= 'Z') {
            contMaiusculas++;
        }
        
        if (ch >= '0' && ch <= '9') {
            contNumeros++;
        }
        
   }

    if (contNumeros != quantNumeros || contMaiusculas != quantMaiusculas || contMinusculas < minMinusculas) {
        printf("%s\n", ufa);
    } else {
        printf("%s\n", bad);
    }

    return 0;
}
