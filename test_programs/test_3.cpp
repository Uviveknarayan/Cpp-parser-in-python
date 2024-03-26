#include <iostream>
int main() {
 int x = 5;
 int y = 10;
 if (x > y) 
 std::cout << "x is greater than y" << std::endl;
 else // Syntax error: missing opening brace
 std::cout << "y is greater than or equal to x" << std::endl;
 
 return 0;
}