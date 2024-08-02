#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number) {
  int num = std::stoi(decimal_number);
  std::string binary = "";
  
  if (num == 0) {
    binary = "0";
  } else {
    while (num > 0) {
      binary = std::to_string(num % 2) + binary;
      num /= 2;
    }
  }
  
  std::cout << binary << std::endl;
}
