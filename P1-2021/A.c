#include <stdio.h>

int main() {
  int N, rounds = 0;
  scanf("%d", &N);
  int NUMS[N];
  for (int i = 0; i < N; i += 1) {
    scanf("%d", &NUMS[i]);
    if (NUMS[i] % 2 == 0) {
        while(NUMS[i] % 2 == 0) {
            NUMS[i] = NUMS[i] * 3 / 2;
            rounds += 1;
        }
    }
  }
  printf("%d\n", rounds);
  return 0;			
}