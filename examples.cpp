#include <iostream>
#include "mul_str.h"
#include <string>

void print_test_texts(int n);

int main()
{
    print_test_texts(3);
}

void print_test_texts(int n) {
    std::string ss = "Test Text 0";

    std::cout << ss * n << std::endl;
    // Unnamed const references: 
    std::cout << STR_MUL("test text 1", n) << std::endl;
    std::cout << std::string("TeStTeXt2") * n << std::endl;
    std::cout << (std::string)"Test-text-3" * n << std::endl;
}