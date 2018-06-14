#include <stdio.h>
#define MAX 100

//#include <iostream>
//#include <string>
int main() {
    int c = 0, paineis = 0;
    char estrada[MAX];
    
    scanf("%d", &c);
    scanf("%s", estrada);
    
    for (int i = 0; i < c; i++) {
        char ch = estrada[i];
        switch (ch) {
            case 'P': 
            case 'C': paineis += 2;
                break;            
            case 'A': paineis += 1;
                break;
            case 'D': paineis += 0;
                break;            
        }
    }
    printf("%d\n", paineis);
    
    return 0;
}
