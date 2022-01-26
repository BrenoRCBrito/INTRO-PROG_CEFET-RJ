#include <stdio.h>

int main() {
  int X;
  scanf("%d", &X);
  for (int y = 0; y < X; y += 1) {
  int L, C, K;
  scanf("%d %d %d", &L, &C, &K);
  char IMAGE[L][C];
  for (int i = 0; i < L; i += 1) {
    for (int j = 0; j < C; j += 1) {
      scanf(" %c", &IMAGE[i][j]);
    }
  }
  for (int i = L - 1; i >= K; i -= 1) {
    for (int j = 0; j < C; j += 1) {
      if (IMAGE[i][j] != '.') {
        int doneV = 0;
        for (int k = 1; k <= i; k += 1) {
          if (j + k < C && j - k >= 0) {
            if (IMAGE[i - k][j + k] != '.' && IMAGE[i - k][j - k] != '.') {
              doneV += 1;
            } else {
              break;
            }
          }
        }
        if (doneV >= K) {
          for (int k = 1; k <= doneV; k += 1) {
            IMAGE[i - k][j + k] = i + '0';
            IMAGE[i - k][j - k] = i + '0';
            IMAGE[i][j] = i + '0';
          }
        }
      }
    }
  }
  int asterisk = 0;
  int dots = 0;
  int marked = 0;
    for (int i = 0; i < L; i += 1) {
      for (int j = 0; j < C; j += 1) {
        if (IMAGE[i][j] == '*') {
          asterisk += 1;
        } else if (IMAGE[i][j] == '.') {
          dots += 1;
        } else if (IMAGE[i][j] != '.' && IMAGE[i][j] != '*') {
          marked += 1;
        }
      }
  }
  if (asterisk == 0) puts("YES");
  else puts("NO");
  }
  return 0;
}