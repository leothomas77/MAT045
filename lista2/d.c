#include <iostream>

using namespace std;

int main()
{
    int x, y, l1, h1, l2, h2;
    char saida = 'N';
    
    scanf("%d %d", &x, &y);
    
    scanf("%d %d", &l1, &h1);
    scanf("%d %d", &l2, &h2);
    
    if (x >= l1 + l2 && y >= h1 && y >= h2) {
        saida = 'S';
    } else if (x >= l1 + h2 && y >= h1 && y >= l2) {
        saida = 'S';
    } else if (x >= h1 + h2 && y >= l1 && y >= l2) {
        saida = 'S';
    } else if (x >= h1 + l2 && y >= l1 && y >= h2) {
        saida = 'S';
    } 
    
    printf("%c\n", saida);
    
    return 0;
}
