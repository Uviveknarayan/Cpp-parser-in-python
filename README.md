# C++ Syntax Checker: Lexer and Parser

## Overview
This project presents a lexer and parser implemented in Python for checking syntax errors in C++ code. It does not utilize LLVM but focuses solely on parsing the code and identifying syntax errors.

## Components
1. **Lexer**: Parses the input C++ file and generates tokens, stored in a list cache named `tokens`.
2. **Parser**: Analyzes the tokens generated by the lexer, maintaining a symbol table to ensure variable declarations are within scope. It checks for syntax errors according to a predefined BNF grammar for C++.

## How to Run
1. Clone the repository: `git clone https://github.com/Uviveknarayan/Cpp-parser-in-python`
2. Navigate to the repository directory.
3. Execute the following steps:
   - Run the `Lexer.ipynb` notebook to parse the input C++ file and generate tokens.
   - Next, execute the `Parser.ipynb` notebook, which utilizes the tokens generated by the lexer to perform syntax checking and error detection.
4. Follow the instructions within the notebooks to interact with the lexer and parser functionalities.
5. There are two parser files parser and parser_mod_again. parser only checks for single error whereas parser_mod_again is capable of checking multiple errors.

## Test Cases
The project includes both correct and incorrect syntax test cases to validate the parser's functionality. Test cases cover various aspects such as variable and function declarations, control structures, expressions, comments, I/O operations, and scoping.

## Contributors
- Uppala Vivek Narayan
- Kanuru Mohith Kumar Reddy
- Priyanshu Behera

This README provides instructions on running the code and highlights the core functionalities of the project. For detailed implementation and usage, please refer to the provided notebooks in the repository.
