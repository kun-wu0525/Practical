#include <stdio.h>

void count_digits(int array[4][4]) {
  int counts[10] = {0};
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 4; ++j) {
      counts[array[i][j]]++;
    }
  }
  for (int i = 0; i < 10; ++i) {
    printf("%d:%d;", i, counts[i]);
  }
  printf("\n");
}
