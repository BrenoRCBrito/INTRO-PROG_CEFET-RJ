#include <stdio.h>

int main() {
  int i;
  long long l;
  double d;
  char c;

  printf("i: %lu %p\n", sizeof(i), &i);
  printf("l: %lu %p\n", sizeof(l), &l);
  printf("d: %lu %p\n", sizeof(d), &d);
  printf("c: %lu %p\n", sizeof(c), &c);
  //A função "sizeof" printa o número de bytes de uma variável.
  //O formatador "%p", é utilizado para imprimir ponteiros.
  //O operador "&" também é utilizado, para acessar o endereço da memória da variável.
  char str[10];
  printf("str: %lu %p\n", sizeof(str[0]), str);
  printf("str[0]: %lu %p\n", sizeof(str[0]), &str);
  printf("str[1]: %lu %p\n", sizeof(str[1]), &str);
  printf("str[9]: %lu %p\n", sizeof(str[9]), &str);
  printf("str[90]: %lu %p\n", sizeof(str[90]), &str[90]);
  int *pi = &i;
  // O "*" é utilizado para manusear ponteiros.
  i = 22;
  scanf("%p", pi);
  printf("i: %d %d\n", i, *pi);
  // int *x = (int *) 0x12345;
  // printf("%d\n", *x);
  int ** ppi = &pi;
  printf("i: %p %d\n", &i, i);
  printf("i: %p %p\n", &pi, pi);
  printf("i: %p %p\n", &ppi, ppi);
  //O tamanho de um endereço de memória sempre é 8 bits.
  return 0;
}