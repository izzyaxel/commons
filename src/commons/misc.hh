#pragma once

#include "math/fixed.hh"
#include <string>

[[nodiscard]] std::string getCWD();

[[nodiscard]] std::string ptrToString(void *ptr);

template <typename T> [[nodiscard]] T bound(T val, T lower, T upper)
{
	if(val < lower) return lower;
	if(val > upper) return upper;
	return val;
}
