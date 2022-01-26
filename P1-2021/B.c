#include <stdio.h>
#include <string.h>

int main() {
  char S[100], T[100], tempSTR[100];
  scanf(" %[a-z] %[a-z]", S, T);
  // printf("%s %s\n", S, T);
  unsigned long  Tlen = strlen(T);
  for ( int i = 0; i <= Tlen; i += 1) {
    tempSTR[i] = T[i];
  }
  // printf("%s %lu\n", tempSTR, Tlen);
  for (;;) {
    char tempChar = tempSTR[Tlen - 1];
    for (int i = Tlen - 2; i >= 0; i -= 1) {
      tempSTR[i + 1] = tempSTR[i];
    }
    tempSTR[0] = tempChar;
    tempSTR[Tlen] = '\0';
  // printf("%s %s\n", T, tempSTR);
  if (strcmp(S, tempSTR) == 0) {
    puts("Yes");
    return 0;
  } else if (strcmp(T, tempSTR) == 0) {
    puts("No");
    return 0;
  }
  }
}