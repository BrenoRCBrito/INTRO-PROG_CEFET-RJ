#include <stdio.h>
#include <stdlib.h>

int ordemCrescente(const void* x, const void* y) {
  int a = *((const int *) x), b = *((const int *) y);
  if (a < b ) return -1;
  if (a > b ) return 1;
  return 0;
}

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i += 1) {
    int p;
    scanf("%d", &p);
    int VB[p], VR[p];
    for (int j = 0; j < p; j += 1) {
      VB[j] = 1000000; VR[j] = 1000000;
    }
    for (int j = 0; j < p; j += 1) {
      int pSize = 0;
      scanf("%d", &pSize);
      if (pSize < 0) VR[j] = pSize * -1;
      else VB[j] = pSize;
    }
    qsort(VB, p, 4, ordemCrescente);
    qsort(VR, p, 4, ordemCrescente);
    for (int j = 0; j < p; j += 1) {
     printf("VB = %d / / ", VB[j]);
     printf("VR = %d\n", VR[j]);
    }
    int blueBuildingSize = 0;
    int redBuildingSize = 0;
    for (int j = 0; j < p; j += 1) {
      for (int k = 0; k < p; k += 1) {
        if (blueBuildingSize == 0 && VB[j] != 1000000 && VR[j] != 1000000) {
        if (VB[j] < VR[k]) {
          blueBuildingSize += 2;
          break;
        }
      } else if (VB[j] != 1000000 && VR[j] != 1000000) {
        if (VB[j] > VR[j - 1]) {
          blueBuildingSize += 1;
          if (VB[j] < VR[j]) blueBuildingSize += 1;
        }
      }
    }
    if (blueBuildingSize > redBuildingSize) printf("%d\n", blueBuildingSize);
    else printf("%d\n", redBuildingSize);
  }
  return 0;
}