//BeeXrowd 1181
// Neste problema você deve ler um número, indicando uma linha da matriz na qual uma operação deve ser realizada, um caractere maiúsculo, indicando a operação que será realizada, e todos os elementos de uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média dos elementos que estão na linha 2 da matriz.
// Entrada
// A primeira linha de entrada contem um número L (0 ≤ L ≤ 11) indicando a linha que será considerada para operação. A segunda linha de entrada contém um único caractere Maiúsculo T ('S' ou 'M'), indicando a operação (Soma ou Média) que deverá ser realizada com os elementos da matriz. Seguem os 144 valores de ponto flutuante que compõem a matriz, sendo que a mesma é preenchida linha por linha, da linha 0 até a linha 11, sempre da esquerda para a direita.
// Saída
// Imprima o resultado solicitado (a soma ou média), com 1 casa após o ponto decimal.

// Exemplo de Entrada	  Exemplo de Saída

//          2
//          S
//          0.0
//          -3.5            12.6
//          2.5
//          4.1

#include <stdio.h>

int main() {
  int dim = 12, l = 0;
  double m[dim][dim], soma = 0, mid = 0;
  //Declaramos um vetor como matriz, cada conjunto de colchetes representa uma dimensão. No caso acima, podemos dizer que criamos um quadrado de lado "dim".
  char op;
  //Declaramos uma variável do tipo "char", que armazena um caracter,
  scanf("%d %c", &l, &op);
  //Sabemos que o formatador "%d" ignora espaços, porém o "%c" não ignora. Para fazê-lo ignorar basta colocar um espaço antes do formatador.
  for (int i = 0; i < dim; i += 1) {
    for (int j = 0; j < dim; j += 1) {
      scanf("%lf", &m[i][j]);
      if (i == l) soma += m[i][j];
    }
  }
  if (op == 'S') printf("%.1lf\n", soma);
  if (op == 'M') {
    mid = soma / dim;
    printf("%.1lf\n", mid);
    }
  return 0;
}