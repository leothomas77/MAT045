// A 
#include <stdio.h>
int main() {
  int N;        
  scanf("%d", &N);
  if (N >= 10000 && N <= 10000) {
     printf("%d\n", N * N);    
  } else { 
     printf("Número fora da faixa\n", N * N);    
  }
  return 0;
}

