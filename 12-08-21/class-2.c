//BeeCrowd 1253
// Júlio César usava um sistema de criptografia, agora conhecido como Cifra de César, que trocava cada letra pelo equivalente em duas posições adiante no alfabeto (por exemplo, 'A' vira 'C', 'R' vira 'T', etc.). Ao final do alfabeto nós voltamos para o começo, isto é 'Y' vira 'A'. Nós podemos, é claro, tentar trocar as letras com quaisquer número de posições.
// Entrada
// A entrada contém vários casos de teste. A primeira linha de entrada contém um inteiro N que indica a quantidade de casos de teste. Cada caso de teste é composto por duas linhas. A primeira linha contém uma string com até 50 caracteres maiúsculos ('A'-'Z'), que é a sentença após ela ter sido codificada através desta Cifra de César modificada. A segunda linha contém um número que varia de 0 a 25 e que representa quantas posições cada letra foi deslocada para a direita.
// Saída
// Para cada caso de teste de entrada, imprima uma linha de saída com o texto decodificado (transformado novamente para o texto original) conforme as regras acima e o exemplo abaixo.

//     Exemplo de Entrada	       Exemplo de Saída
//           6
//           VQREQFGT               TOPCODER
//           2
// ABCDEFGHIJKLMNOPQRSTUVWXYZ QRSTUVWXYZABCDEFGHIJKLMNOP
//           10
//           TOPCODER               TOPCODER
//           0
//           ZWBGLZ                 AXCHMA
//           25
//           DBNPCBQ                CAMOBAP
//           1
//           LIPPSASVPH             HELLOWORLD
//           4

#include <stdio.h>

int main() {
  int n, passo;
  char msg[51];
  scanf("%d", &n);
  for (int i = 0; i < n; i += 1) {
    scanf("%s%d", msg, &passo);
    for (int j = 0; msg[j] != '\0'; j += 1) {
      char original = msg[j] - passo;
      if (original < 'A') original = 'Z' - ('A' - (original + 1));
      printf("%c",original);
    }
    printf("\n");
  }
  return 0;
}