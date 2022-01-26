#include <stdio.h>

int main() {
  int a[3] = {1, 2, 3};
  double x[3] = {497868698.5, 6.7, 8.9};
  int *pa = a;
  double *px = x;
  printf("%d %lf\n", *pa, *px);
  pa = x;
  printf("%d %p\n", pa, px);
  printf("%d %lf\n", *pa, *px);
  void *p = x;
  px = p;
  printf("%lf\n", *px);
  printf("%lf\n", *((double *) p));
  //No "print f" acima estamos interpretando a variável de tipo "void" como uma de tipo double.
  return 0;
}