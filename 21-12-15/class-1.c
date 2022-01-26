#include <stdio.h>

int main() {
  int x = 5;
  for (int i = 0; i <= 10; i += 1) 
  printf("5 * (2 ** %d) = %d\n", i, 5 << i);
  //Usamo o operador "shift left" que adiciona um bit 0 no final do elemento.
  for (int i = 0; i <= 10; i += 1) 
  printf("123 / (2 ** %d) = %d\n", i, 123 >> i);
  //Usamo o operador "shift right" que remove o último bit de um elemento.
  for (int i = 0; i <= 10; i += 1) 
  printf("%d\n", i & 1);
  // O operador "&" compara todos os bit de dois elementos, retornando o bit resultante da comparação "and".
  //Ex: 01010101(85) & 10101010(85) = 00000000(0);
  //Ex: 11110000(240) & 11110000(240) = 11110000(240);
  //Ex: 00001111(15) & 11110000(240) = 00000000(0);
  for (int i = 0; i <= 10; i += 1) 
  printf("%d\n", i | 1);
  //O mesmo ocorre para o |, só que a comparação agora é o "or".
  //Ex: 01010101(85) & 10101010(85) = 11111111(255);
  //Ex: 11110000(240) & 11110000(240) = 11110000(240);
  //Ex: 00001111(15) & 11110000(240) = 11111111(255);
  for (int i = 0; i <= 10; i += 1) 
  printf("%d\n", i ^ 1);
  //O Operador "^", faz o mesmo, só que com a comparação "exlusiva", "0 para iguais e 1 para diferentes".
  return 0;
}
//Uma variável de tipo int em C, contém 32bits. 1 bit para identificar se o número é negativo ou não, e os outros para representar os números.