#pragma once

#include <string>

std::string operator*(const std::string& str, const size_t& count);

#define STR_MUL(str, n) std::string(str) * n
