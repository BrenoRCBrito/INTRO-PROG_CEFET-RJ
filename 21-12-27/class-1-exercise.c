#include <stdio.h>

int lenstr(char *s) {
  int len = 0;
  for (int i = 0;; i += 1) {
    if (s[i] == '\0') break;
    len += 1;
  }
  return len;
}

void TODASMAIUSCULAS(char *s) {
  for (int i = 0;; i += 1) {
    if (s[i] == '\0') break;
    if (s[i] >= 'a' && s[i] <= 'z') {
      s[i] -= 'a' - 'A';
    }
  }
}

int main() {
  char nome[] = "douglas cardoso";
  printf("%d\n", lenstr(nome));
  TODASMAIUSCULAS(nome);
  printf("%s\n", nome);
  return 0;
}