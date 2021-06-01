#include <stdio.h>
int main()
{
  int n, vet[1000000], max = -1000, aux = 0;
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &vet[i]);
    //Solution using Kadane's Algorithm - Time Complexity: O(n+k) -> O(n)
    int sumAux = aux + vet[i];
    if (sumAux > vet[i])
      aux = sumAux;
    else
      aux = vet[i];
    if (aux > max)
      max = aux;
  }
  if (max < 0)
    max = 0;
  printf("%d\n", max);
  return 0;
}