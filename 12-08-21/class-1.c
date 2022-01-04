//BeeCrowd 1168
//João quer montar um painel de leds contendo diversos números. Ele não possui muitos leds, e não tem certeza se conseguirá montar o número desejado. Considerando a configuração dos leds dos números abaixo, faça um algoritmo que ajude João a descobrir a quantidade de leds necessário para montar o valor.
// Entrada
// A entrada contém um inteiro N, (1 ≤ N ≤ 1000) correspondente ao número de casos de teste, seguido de N linhas, cada linha contendo um número (1 ≤ V ≤ 10100) correspondente ao valor que João quer montar com os leds.
// Saída
// Para cada caso de teste, imprima uma linha contendo o número de leds que João precisa para montar o valor desejado, seguido da palavra "leds".

// Exemplo de Entrada	  Exemplo de Saída

//      3
//      115380             27 leds
//      2819311            29 leds
//      23456              25 leds

#include <stdio.h>

int numero_de_leds(char d) {
  int numleds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
  return numleds[d - '0'];
  //Operações entre caracteres respeitam os valores decimais da tabela ASCII.
}

int main() {
  int n;
  char num[102];
  scanf("%d", &n);
  for (int i = 0; i < n; i += 1) {
    int total = 0;
    scanf("%s", num);
    for (int j = 0; num[j] != '\0'; j += 1) {
      char digito = num[j];
      total += numero_de_leds(digito);
    }
    printf("%d leds\n", total);
  }
  return 0;
}