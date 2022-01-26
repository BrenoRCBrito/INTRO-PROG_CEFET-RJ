#include <stdio.h>

int main() {
  unsigned int x = 1 << 31;
  //Uma variável tipo "unsigned int" comtém todos seus 32 bits dedicados à valor. Ou seja, não possui o primeiro bit para definição de positivo ou negativo.
  printf("%u\n", x);
  //Note que o formatador para "unsigned" é o "%u".
  long long int y = 1ll << 63;
  // Já a variável "long long int" possui 64 bits. (1 para sinal e 63 para valor).
  //Perceba que para declarar um valor tipo "long long" é necessário usar "ll". 
  printf("%lld\n", y);
  //Note que o formatador para "long long" é o "%ll".
  unsigned long long int z = 1ull << 63;
  //Possui 64 bits para valor.
  printf("%llu\n", z);
  short int a;
  a =  (1 << 15) - 1;
  //Possui 16 bits, 1 de sinal e 15 de valor.
  printf("%d\n", a);
  char b = 'b';
  //Possui 8 bits, 1 para sinal e 7 para valor.
  return 0;
}