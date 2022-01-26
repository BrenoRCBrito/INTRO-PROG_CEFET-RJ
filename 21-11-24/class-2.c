//BeeCrowd 1002
// A fórmula para calcular a área de uma circunferência é: area = π . raio2. Considerando para este problema que π = 3.14159:
// - Efetue o cálculo da área, elevando o valor de raio ao quadrado e multiplicando por π.
// Entrada
// A entrada contém um valor de ponto flutuante (dupla precisão), no caso, a variável raio.
// Saída
// Apresentar a mensagem "A=" seguido pelo valor da variável area, conforme exemplo abaixo, com 4 casas após o ponto decimal. Utilize variáveis de dupla precisão (double). Como todos os problemas, não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".

// Exemplos de Entrada: 	Exemplos de Saída:
//        2.00                A=12.5664

//        100.64              A=31819.3103

//        150.00              A=70685.7750

#include <stdio.h>
#include <math.h>
//Biblioteca de funções matemáticas, como a "pow".

int main() {
  double pi = 3.14159, raio;
  //Declaramos uma variável do tipo double, ou seja, uma variãvel que armazena um decimal com o dobro de precisão de uma varíavel de tipo float.
  scanf("%lf", &raio);
  //Jã que estamos trabalhando com "double", temos que usar no scanf o "%lf" (long float, também existe o %f para float).
  double area = pi * pow(raio, 2);
  //A função "pow" recebe um número e o potencializa ao valor do segundo argumento.
  printf("A=%.4lf\n", area);
  //O problema pede uma precisão de 4 casas decimais, para isso basta colocar "." seguido do número de casas que deseja mostrar, após a porcentagem no primeiro argumento do "printf".
  return 0;
}