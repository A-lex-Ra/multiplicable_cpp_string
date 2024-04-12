#pragma once

#include <string>

inline std::string operator*(const std::string& str, size_t count) {
	std::string tmp;
	const size_t kNewCapacity = str.size() * count;
	tmp.reserve(kNewCapacity);

	for (size_t i = 0; i < kNewCapacity; i += str.size()) {
		tmp.replace(i, str.size(), str);
	}
	return tmp;
}

inline std::string mul(const char* str, size_t count)
{
	std::string origin(str);
	return origin * count;
}
