//BeeCrowd 1828
// No oitavo episodio da segunda temporada do seriado The Big Bang Theory, The Lizard-Spock Expansion, Sheldon e Raj discutem qual dos dois é o melhor: o filme Saturn 3 ou a série Deep Space 9. A sugestão de Raj para a resolução do impasse é uma disputa de Pedra-Papel-Tesoura. Contudo, Sheldon argumenta que, se as partes envolvidas se conhecem, entre 75% e 80% das disputas de Pedra-Papel-Tesoura terminam empatadas, e então sugere o Pedra-Papel-Tesoura-Lagarto-Spock.
// As regras do jogo proposto são:
// a tesoura corta o papel;
// o papel embrulha a pedra;
// a pedra esmaga o lagarto;
// o lagarto envenena Spock;
// Spock destrói a tesoura;
// a tesoura decapita o lagarto;
// o lagarto come o papel;
// o papel contesta Spock;
// Spock vaporiza a pedra;
// a pedra quebra a tesoura.
// Embora a situação não se resolva no episódio (ambos escolhem Spock, resultando em um empate), não é difıcil deduzir o que aconteceria se a disputa continuasse. Caso Sheldon vencesse, ele se deleitaria com a vitória, exclamando "Bazinga!"; caso Raj vencesse, ele concluiria que "Raj trapaceou!"; caso o resultado fosse empate, ele exigiria nova partida: "De novo!". Conhecidas as personagens do jogo escolhido por ambos, faça um programa que imprima a provável reação de Sheldon.
// Entrada
// A entrada consiste em uma série de casos de teste. A primeira linha contém um inteiro positivo T (T ≤ 100), que representa o número de casos de teste. Cada caso de teste é representado por uma linha da entrada, contendo as escolhas de Sheldon e Raj, respectivamente, separadas por um espaço em branco. As escolha possíveis são as personagens do jogo: pedra, papel, tesoura, lagarto e Spock.
// Saida
// Para cada caso de teste deverá ser impressa a mensagem "Caso #t: R", onde t é o número do caso de teste (cuja contagem se inicia no número um) e R é uma das três reações possíveis de Sheldon: "Bazinga!", "Raj trapaceou!", ou "De novo!".

// Exemplos de Entrada	      Exemplos de Saída

//      3
//      papel pedra          Caso #1: Bazinga!
//      lagarto tesoura      Caso #2: Raj trapaceou!
//      Spock Spock          Caso #3: De novo!

#include <stdio.h>
#include <string.h>
//Bibliotecas com funções direcionadas a strings como "strcmp".

int main() {
  int t;
  char sheldon[8], raj[8];
  //Um vetor de de tipo "char", é o que usamos para as famosas "strings".
  //Note que a maior palavra possível nesse problema possui somente 7 caracteres, porém ao trabalharmos com strings existe uma peculiaridade. Sabemos que toda vez que declaramos uma varíavel, um valor "lixo" é atribuído a ela, no caso das "strings", que são vetores ede tamanho fixo, ao atribuir uma string com tamanho de caracteres menor do que a do vetor teriamos lixo nos últimos espaços. Para resolver esse problema, no final de cada string existe o "terminador de strings" (\0), que ocupa um espaço do vetor da string, logo todo vetor de string precisa possuir pelo menos um espaço a mais para o terminador.
  char regras [10][2][8] = {
    {"tesoura", "papel"},
    {"papel", "pedra"},
    {"pedra", "lagarto"},
    {"lagarto", "Spock"},
    {"Spock", "tesoura"},
    {"tesoura", "lagarto"},
    {"lagarto", "papel"},
    {"papel", "Spock"},
    {"Spock", "pedra"},
    {"pedra", "tesoura"},
  };
  //Matriz cujas dimensões são "[Regras][Respostas][Caracteres das respostas]"
  scanf("%d", &t);
  for (int i = 0; i < t; i += 1) {
    printf("Caso #%d: ", i + 1);
    scanf("%s%s", sheldon, raj);
    //Observe que o formatador para strings é o "%s", e que não é necessário o operador de endereço "&" para as variavéis que receberam as "strings".
    //SOLUÇÃO COM VÁRIOS "IFS".
    // if (strcmp(sheldon, "tesoura") == 0 && strcmp(raj, "papel") == 0 ) puts("Bazinga!");
    // else if (strcmp(sheldon, "tesoura") == 0 && strcmp(raj, "lagarto") == 0 ) puts("Bazinga!");
    // else if (strcmp(sheldon, "papel") == 0 && strcmp(raj, "pedra") == 0 ) puts("Bazinga!");
    // else if (strcmp(sheldon, "papel") == 0 && strcmp(raj, "Spock") == 0 ) puts("Bazinga!");
    // else if (strcmp(sheldon, "pedra") == 0 && strcmp(raj, "lagarto") == 0 ) puts("Bazinga!");
    // else if (strcmp(sheldon, "pedra") == 0 && strcmp(raj, "tesoura") == 0 ) puts("Bazinga!");
    // else if (strcmp(sheldon, "Spock") == 0 && strcmp(raj, "tesoura") == 0 ) puts("Bazinga!");
    // else if (strcmp(sheldon, "Spock") == 0 && strcmp(raj, "pedra") == 0 ) puts("Bazinga!");
    // else if (strcmp(sheldon, "lagarto") == 0 && strcmp(raj, "Spock") == 0 ) puts("Bazinga!");
    // else if (strcmp(sheldon, "lagarto") == 0 && strcmp(raj, "papel") == 0 ) puts("Bazinga!");
    // else if  (strcmp(sheldon, raj) == 0) puts("De novo!");
    // else puts("Raj trapaceou!");
    // Observe que usamos uma função "strcmp" para comparar strings, isso porque em C o comparador "==" não funciona para comparar duas strings. Logo, usamos essa função comparando seu retorno à zero, se queremos que as strings sejam iguais.
    //SOLUÇÃO COM MATRIZ.
    if (strcmp(sheldon, raj) == 0) {
      puts("De novo!");
      continue;
      }
    int sheldon_ganhou = 0;
    for (int j = 0; j < 10; j += 1) {
      if (strcmp(sheldon, regras[j][0]) == 0 && strcmp(raj, regras[j][1]) == 0 ) sheldon_ganhou = 1;
    }
    if (sheldon_ganhou) puts("Bazinga!");
      else puts("Raj trapaceou!");
  }
  return 0;
}