//BeeCrowd 1013
// Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. Utilize a fórmula:
// Obs.: a fórmula apenas calcula o maior entre os dois primeiros (a e b). Um segundo passo, portanto é necessário para chegar no resultado esperado.
// Entrada
// O arquivo de entrada contém três valores inteiros.
// Saída
// Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".

// Exemplos de Entrada	    Exemplos de Saída

//      7 14 106              106 eh o maior

//      217 14 6              217 eh o maior

#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  if (a > b && a > c) printf("%d eh o maior\n", a);
  else if (b > c) printf("%d eh o maior\n", b);
  else printf("%d eh o maior\n", c);
  return 0;
}

