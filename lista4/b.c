#include <stdio.h>
#include <string.h>
#define MAX 15

int main() {
    int c = 0, numero = 0, tam = 0;
    char telefone[MAX];
    
    scanf("%s", telefone);
    tam = strlen(telefone);
    
    for (int i = 0; i < tam; i++) {
        char ch = telefone[i];
        switch (ch) {
            case 'A': 
            case 'B': 
            case 'C': telefone[i] = '2';
                break;            
            case 'D': 
            case 'E': 
            case 'F': telefone[i] = '3';
                break;            
            case 'G': 
            case 'H': 
            case 'I': telefone[i] = '4';
                break;            
            case 'J': 
            case 'K': 
            case 'L': telefone[i] = '5';
                break;            
            case 'M': 
            case 'N': 
            case 'O': telefone[i] = '6';
                break;            
            case 'P': 
            case 'Q': 
            case 'R': 
            case 'S': telefone[i] = '7';
                break;            
            case 'T': 
            case 'U': 
            case 'V': telefone[i] = '8';
                break;            
            case 'W': 
            case 'X': 
            case 'Y': 
            case 'Z': telefone[i] = '9';
                break;            
        }
    }
    printf("%s\n", telefone);
    
    return 0;
}
