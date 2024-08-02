#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number);

int main() {
  std::string number;
  std::cout << "Enter a decimal number: ";
  std::cin >> number;
  print_binary_str(number);
  return 0;
}
