// //BeeCrowd 1172
// Faça um programa que leia um vetor X[10]. Substitua a seguir, todos os valores nulos e negativos do vetor X por 1. Em seguida mostre o vetor X.
// Entrada
// A entrada contém 10 valores inteiros, podendo ser positivos ou negativos.
// Saída
// Para cada posição do vetor, escreva "X[i] = x", onde i é a posição do vetor e x é o valor armazenado naquela posição.

// Exemplo de Entrada	  Exemplo de Saída

//          0             X[0] = 1
//          -5            X[1] = 1
//          63            X[2] = 63
//          0             X[3] = 1

#include <stdio.h>

int main() {
  int x[10];
  //Fizemos a declaração de um vetor de inteiro, identificando o "nome da variável do vetor e sua respectiva quantidade de "casas" em colchetes.
  for (int i = 0; i < 10; i += 1) {
    scanf("%d", &x[i]);
    if (x[i] <= 0) x[i] = 1;
    printf("%d\n", x[i]);
  }
  return 0;
}