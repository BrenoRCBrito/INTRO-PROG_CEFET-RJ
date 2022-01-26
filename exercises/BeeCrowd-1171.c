#include <stdio.h>

int main() {
  int n;
  int V[2001];
  scanf("%d", &n);
  for (int j = 0; j < 2001; j += 1) {
    V[j] = 0;
  }
  for (int j = 0; j < n; j += 1) {
    int place;
    scanf("%d", &place);
    V[place] += 1;
  }
   for (int j = 0; j < 2001; j += 1) {
    if (V[j] != 0) printf("%d aparece %d vez(es)\n", j, V[j]);
  }
}