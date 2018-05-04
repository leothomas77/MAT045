
// E 

#include <stdio.h>
int main() {

  int L, D, K, P, custo;        
  scanf("%d %d", &L, &D);
  scanf("%d %d", &K, &P);
  //validacoes de entrada

  quant_pedagios = L / D;
  custo = L * K + P * quant_pedagios;
  printf("%d", custo); 

  return 0;
}

