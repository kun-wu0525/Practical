#include <stdio.h>

int array_min(int integers[], int length);
int array_max(int integers[], int length);
int sum_min_max(int integers[], int length);

int main() {
  int array[5] = {3, 1, 4, 1, 5};
  int length = 5;
  int result = sum_min_max(array, length);
  printf("The sum of the minimum and maximum elements is: %d\n", result);

  return 0;
}
