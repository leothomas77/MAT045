// B
#include <iostream>
int main()
{
  int N, M;
  scanf("%d", &N);
  if (N >= 1 && N <= 40) {
      scanf("%d", &M);
      if (M >= 1 && M <= 40) {
        printf("%d\n, N - M);   
      } else {
        printf("Valor de M fora da faixa\n");
      }
  } else {
    printf("Valor de N fora da faixa\n");
  }
  return 0;
}

