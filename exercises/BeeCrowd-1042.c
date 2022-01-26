#include <stdio.h>

int main() {
  int n[3];
  int n2[3];
  for (int i = 0; i < 3; i += 1) {
    scanf("%d", &n[i]);
    n2[i] = n[i];
  }
  for (int i = 0; i < 3 - 1; i += 1) {
    for (int j = 0; j < 3 - i - 1; j += 1) {
      if (n[j] > n[j + 1]) {
        int temp = n[j];
        n[j] = n[j + 1];
        n[j + 1] = temp;
      }
    }
    
  }
  for (int i = 0; i < 3; i += 1) printf("%d\n", n[i]);
  printf("\n");
  for (int i = 0; i < 3; i += 1) printf("%d\n", n2[i]);
  return 0;
}