#include <stdio.h>
#include <stdlib.h>

int ordemCrescente(const void* x, const void* y) {
  int a = *((const int *) x), b = *((const int *) y);
  if (a < b ) return -1;
  if (a > b ) return 1;
  return 0;
}

int main() {
  int n, q;
  int VN[100000], VQ[100000];
  for (int i = 1;; i += 1) {
    scanf("%d %d", &n, &q);
    if (n == 0 && q == 0) return 0;
    for (int j = 0; j < n; j += 1) {
      scanf("%d", &VN[j]);
    }
    for (int j = 0; j < q; j += 1) {
      scanf("%d", &VQ[j]);
    }
    if (n > 1) qsort(VN, n, 4, ordemCrescente);
    printf("CASE# %d:\n", i);
    for (int j = 0; j < q; j += 1) {
      int found = 0;
      for (int k = 0; k < n; k += 1) {
        if (VN[k] == VQ[j]) {
          found = 1;
          printf("%d found at %d\n", VQ[j], k + 1);
          break;
        }
      }
      if (found == 0) printf("%d not found\n", VQ[j]);
    }
  }
  return 0;
}