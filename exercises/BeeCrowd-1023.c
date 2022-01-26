#include <stdio.h>
#include <math.h>

int main() {
    int first = 1;
  for (int i = 1;; i += 1) {
    int n, x = 0, y = 0, VC[1000000];
    double totalx = 0, totaly = 0;
    scanf("%d", &n);
    if (n == 0) return 0;
    if (first == 0) printf("\n");
    for (int j = 0; j <= 1000000; j += 1) {
      VC[j] = 0;
    }
    for (int j = 0; j < n; j += 1) {
      scanf("%d %d", &x, &y);
      totalx += x;
      totaly += y;
      int mid = y / x;
      int floorMid = floor(mid);
      VC[floorMid] += x;
    }
    printf("Cidade# %d:\n", i);
    for (int j = 0; j <= 1000000; j += 1) {
      if(VC[j] != 0) {
        printf("%d-%d ", VC[j], j);
      }
    }
    printf("\n");
    double MidCons = totaly / totalx;
    double MidCons2 = MidCons * 100;
    double MidCons3 = floor(MidCons2);
    double MidCons4 = MidCons3 / 100;
    printf("Consumo medio: %.2lf m3.\n",MidCons4);
    first = 0;
  }
  return 0;
}