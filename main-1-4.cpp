#include <stdio.h>

void print_scaled(int array[3][3], int scale);

int main() {
  int matrix[3][3] = {
    {0, 1, 2},
    {3, 4, 5},
    {6, 7, 8}
  };
  int scale = 3;
  print_scaled(matrix, scale);
  return 0;
}
