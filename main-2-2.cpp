#include <stdio.h>

int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
  int binary_array[5] = {1, 0, 1, 1, 0};
  int size = 5;
  int result = binary_to_int(binary_array, size);
  printf("The integer value is: %d\n", result);
  return 0;
}
