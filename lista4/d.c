/*
ONZE - Você pode dizer 11

A sua tarefa é, dado um número positivo N, determinar se ele é um múltiplo de onze.
Entrada

A entrada é um arquivo onde cada linha contém um número positivo. Uma linha contendo o número 0 sinaliza o fim da entrada. Os números dados podem conter até 1000 dígitos.
Saída

A saída do programa deve indicar, para cada número da entrada, se ele é um múltiplo de onze ou não.
Exemplo de Entrada

112233
30800
2937
323455693
5038297
112234
0

Exemplo de Saída

112233 is a multiple of 11.
30800 is a multiple of 11.
2937 is a multiple of 11.
323455693 is a multiple of 11.
5038297 is a multiple of 11.
112234 is not a multiple of 11.

*/
#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    int quantDigitos, tam;
    unsigned int numero;
    char numeroChar[MAX];

    scanf("%d", &quantDigitos);
    scanf("%s", numero);
    tam = strlen(numero);
    
    for (int i = 0; i < tam; i++) {
        char digito = numeroChar[i];
        int dezenas = 0;
        for (int j = 0; j < i; j++) {
            
        }
    }

    return 0;
}
