//BeeCrowd 1001
// Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma de A e B atribuindo o seu resultado na variável X. Imprima X conforme exemplo apresentado abaixo. Não apresente mensagem alguma além daquilo que está sendo especificado e não esqueça de imprimir o fim de linha após o resultado, caso contrário, você receberá "Presentation Error".
// Entrada
// A entrada contém 2 valores inteiros.
// Saída
// Imprima a mensagem "X = " (letra X maiúscula) seguido pelo valor da variável X e pelo final de linha. Cuide para que tenha um espaço antes e depois do sinal de igualdade, conforme o exemplo abaixo.

//Exemplos de Entrada: Exemplos de Saída:

//        10                X = 19
//        9

//        -10               X = -6
//        4                

//        15                X = 8
//        -7               

#include <stdio.h>
// Acima temos uma importação de uma biblioteca padrão da linguagem C, standard input-output header, é dela que as funções scanf e printf originam.

int soma(int x, int y) {
  return x + y;
}
//Na Função de soma acima declaramos "int" antes do nome da função, isso significa que ela retorna um valor de tipo "int".

int main() {
  int a, b;
  // Variáveis quando declaradas sempre possuem um valor aleatório (lixo), use o debug para observar.
  //No caso o tipo "int" quer dizer que iremos salvar um número de tipo inteiro.
  scanf("%d", &a);
  scanf("%d", &b);
  // A função scanf é utilizada para "ler" uma entrada do usuário (primeiro argumento) e salvá-la em uma varíavel (segundo argumento).
  // Note que usamos %d (decimal) para salvar uma variável de tipo int dentro da string, também poderíamos usar %i (int).
  int x = soma(a,b);
  printf("%d\n", x);
  //A função printf, é utilizada para imprimir uma string no caso irá receber no "%d" a varíavel "x" e pular uma linha "\n".
  return 0;
}
// A função "main" é a função principal do programa, que retorna um valor do tipo inteiro (0), que será utilizado como "exit code" do programa.