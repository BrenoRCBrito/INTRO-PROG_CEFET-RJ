// Renato gosta muito de geometria e acaba de achar alguns palitos em seu quarto. Ele está tentando utilizar esses palitos de forma a fazer um polígono com o maior número de lados possíveis.

// Para montar o polígono, Renato não quer cruzar os palitos; ou seja, os palitos devem se tocar apenas nas pontas. Ele também não quer quebrar nenhum palito, de forma que todos os palitos que forem usados devem manter sua medida original.

// Se, por exemplo, os palitos têm medidas 3, 4 e 5, é possível utilizar todos os três palitos para formar um triângulo. Mas se as medidas são 1, 1, 1 e 5, é possível formar um triângulo com três lados iguais a 1 mas não é possivel formar um polígono com todos os 4 palitos.

// Você consegue ajudar Renato a descobrir qual é o maior número de palitos que ele consegue usar?

// Entrada
// A primeira linha contém apenas um inteiro N (3 ≤ N ≤ 100000) que indica o número de palitos. A segunda linha possui N inteiros indicando as medidas dos palitos, ( as medidas dos palitos são inteiros positivos menores ou iguais a 10000).

// Saída
// Se programa deve imprimir uma única linha, contendo um único inteiro, o maior número de lados que o polígono pode ter seguindo as restrições do enunciado. Se não for possível formar nenhum polígono usando os palitos, imprima 0.

// Exemplos de Entrada	Exemplos de Saída
// 3

// 3 4 5

// 3

// 3

// 3 1 2

// 0

// 4

// 1 1 5 1

// 3

#include <stdio.h>
#include <stdlib.h>

int ordemDecrescente(const void* x, const void* y) {
  int a = *((const int *) x), b = *((const int *) y);
  if (a < b ) return 1;
  if (a > b ) return -1;
  return 0;
}

int main() {
  int n = 0;
  scanf("%d", &n);
  if (n < 3 || n > 100000) {
    puts("0");
    return 0;
  } 
  int l[n];
  for (int i = 0; i < n; i += 1) {
    scanf("%d", &l[i]);
  }
  qsort(l, n, 4, ordemDecrescente);
  for (int i = 0; i < n; i += 1){ 
    int sum = 0;
    for (int j = i + 1; j < n; j += 1) {
      sum += l[j];
    }
    if (l[i] < sum) {
        printf("%d\n", n - i);
        return 0;
    }
  }
  puts("0");
  return 0;
}