#include <stdio.h>

bool is_palindrome(int integers[], int length);
int sum_array_elements(int integers[], int length);
int sum_if_palindrome(int integers[], int length);

int main() {
  int array1[5] = {1, 2, 3, 2, 1};
  int length1 = 5;
  int result1 = sum_if_palindrome(array1, length1);
  printf("The result for array1 is: %d\n", result1);

  int array2[4] = {1, 2, 3, 4};
  int length2 = 4;
  int result2 = sum_if_palindrome(array2, length2);
  printf("The result for array2 is: %d\n", result2);

  return 0;
}
