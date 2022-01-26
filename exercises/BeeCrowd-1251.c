#include <stdio.h>

int main() {
  char e[123];
  int earlyEOF = 0;
  for (;;) {
    int CHARS[256];
    for (int i = 0; i < 256; i += 1) CHARS[i] = 0;
    for (int o = 0; o < 10; o += 1) {
      char c;
      if (scanf("%c", &c) == EOF) {
          earlyEOF = 1;
          ungetc(c, stdin);
          break;
      } else {
        ungetc(c, stdin);
      }
      scanf("%c", &c);
      if (c == '\n') break;
      int d = c;
      CHARS[d] += 1; 
    }
    for (int i = 1; i <= 1000; i += 1) {
      for (int j = 255; j > 0; j -= 1) {
        if (CHARS[j] == i) printf("%d %d\n", j, CHARS[j]);
      }
    }
    if (scanf("%[^!-Ç]", e) == EOF || earlyEOF == 1) return 0;
    printf("\n");
  }
  return 0;
}