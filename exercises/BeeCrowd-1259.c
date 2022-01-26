#include <stdio.h>
#include <stdlib.h>

int ordemCrescente(const void* x, const void* y) {
  int a = *((const int *) x), b = *((const int *) y);
  if (a < b ) return -1;
  if (a > b ) return 1;
  return 0;
}

int ordemDecrescente(const void* x, const void* y) {
  int a = *((const int *) x), b = *((const int *) y);
  if (a > b ) return -1;
  if (a < b ) return 1;
  return 0;
}

int main() {
  int n;
  scanf("%d", &n);
  int V[n], VP[n], VI[n];
  for (int j = 0; j < n; j += 1) {
    VP[j] = -1; VI[j] = -1;
  }
  for (int j = 0; j < n; j += 1) {
    scanf("%d", &V[j]);
    if (V[j] % 2 == 0) VP[j] = V[j];
    else VI[j] = V[j];
  }
  qsort(VP, n, 4, ordemCrescente);
  qsort(VI, n, 4, ordemDecrescente);
  for (int j = 0; j < n; j += 1) {
    if (VP[j] % 2 == 0) printf("%d\n", VP[j]);
  }
  for (int j = 0; j < n; j += 1) {
    if (VI[j] % 2 == 1) printf("%d\n", VI[j]);
  }
  return 0;
}