#include <iostream>
#include "mul_str.h"

void print_test_texts(int n);

int main()
{
    print_test_texts(10);
}

void print_test_texts(int n) {
    // Named std::string
    std::string ss = "Test Text 0";
    std::cout << ss * n << std::endl;

    // Unnamed c-strings (operator* cannot be overloaded with built-in types)
    std::cout << mul("test text 1", n) << std::endl;
    std::cout << std::string("TeStTeXt2") * n << std::endl;
}