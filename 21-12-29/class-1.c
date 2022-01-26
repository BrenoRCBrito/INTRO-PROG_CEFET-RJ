#include <stdio.h>

void produtoInterno(int *a, int *b, int *c, int tamanho) {
  for (int i = 0; i < tamanho; i += 1) c[i] = a[i] * b[i];
}

void somaVetorial(int *a, int *b, int *c, int tamanho) {
  for (int i = 0; i < tamanho; i += 1) c[i] = a[i] + b[i];
}

int prod2(int a, int b) {
  return a * b;
}

int soma2(int a, int b) {
  return a + b;
}

void operacaoVetorialGenerica(int *a, int *b, int *c, int tamanho, int operacao(int, int)) {
  for (int i = 0; i < tamanho; i += 1) c[i] = operacao(a[i], b[i]);
}

int main() {
  int x[3] = {1, 2 ,3}, y[3] = {4 ,5 ,6}, z[3];
  operacaoVetorialGenerica(x, y, z, 3, prod2);
  // produtoInterno(x, y, z, 3);
  printf("%d %d %d\n", z[0], z[1], z[2]);
  // somaVetorial(x, y, z, 3);
  operacaoVetorialGenerica(x, y, z, 3, soma2);
  printf("%d %d %d\n", z[0], z[1], z[2]);
  return 0;
}