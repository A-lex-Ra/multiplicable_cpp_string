#include "mul_str.h"

std::string operator*(const std::string& str, const size_t& count) {
	std::string tmp(str.size() * count, 'N');
	for (size_t i = 0; i < count; ++i)
	{
		tmp.replace(i * str.size(), str.size(), str);
	}
	return tmp;
}