# Kadane_Algorithm_Maximum_subarray_problem
Implementation of a solution to the consecutive subsequence problem, using Kadane's algorithm, made in C language for an exercise of the subject Design and Analysis of Algorithms at UFSCar - Sorocaba
## Kadane's Algorithm
```c
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
```
