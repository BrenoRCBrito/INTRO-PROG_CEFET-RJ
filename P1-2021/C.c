#include <stdio.h>
#include <stdlib.h>

int ascendant(const void *x, const void * y) {
  int a = *((const int *) x), b = *((const int *) y);
  if (a > b) return 1;
  if (a < b) return -1;
  return 0;
}

int main() {
  int N, K, cost = 0;
  scanf("%d %d", &N, &K);
  int trees[N];
  for (int i = 0; i < N; i += 1) {
    scanf("%d", &trees[i]);
  }
  qsort(trees, N, sizeof(trees[0]), ascendant);
  // for (int i = 0; i < N; i += 1) {
  //   printf("///%d///\n", trees[i]);
  // }
  for (int i = 0; i < N; i += 1) {
    int tempCost = 0;
    if (i + (K - 1) < N) {
      tempCost = trees[i + (K - 1)] - trees[i];
      if (cost == 0 || tempCost < cost) cost = tempCost;
    }
  }
  printf("%d\n", cost);
  return 0;
}