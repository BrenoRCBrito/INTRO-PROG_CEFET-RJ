#include <stdio.h>

int somaPar(int a, int b){
  printf("&a: %p\n", &a);
  printf("&b: %p\n", &b);
  //Aqui podemos ver que uma função reivindica espaços na memória para guardar seus parâmetros.
  return a + b;
}

int somaVet(int *v, int tamanho) {
  //*v == v[0];
  printf("v: %p\n", v);
  printf("&v: %p\n", &v);
  printf("&tamanho: %p\n", &tamanho);
  int soma = 0;
  for (int i = 0; i < tamanho; i += 1)
    soma += v[i];
  return soma;
}

int main() {
  int n;
  printf("&n: %p\n", &n);
  scanf("%d", &n);
  int a[n];
  printf("a: %p\n", a);
  for (int i = 0; i< n; i += 1) {
    printf("&a[%d]: %p\n", i, &a[i]);
    scanf("%d", &a[i]);
    }
  printf("%d %d\n", somaPar(a[0], a[1]), somaVet(a, n));
  //Nos argumentos de uma função, são salvos na ordem dos últimos para os primeiros.
  return 0;
}