#include <iostream>
int main() {
 int x = 5;
 if (x > 3) // Missing curly braces here
 std::cout << "x is greater than 3" << std::endl;
 else
 std::cout << "x is not greater than 3" << std::endl;
 return 0;
}