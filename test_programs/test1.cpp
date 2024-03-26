#include <iostream>
int main() {
 for (int i = 0; i < 5; i++) // Missing curly brace here
 std::cout << "i: " << i << std::endl;
 return 0;
}