/**
 * 情况一：模板参数既非引用也非指针
 * template<typename T>
 * f(T)
 */

#include <iostream>
#include <string>

#include <base.h>

using namespace emc::base;

template<typename T, std::size_t N>
constexpr std::size_t array_size(T (&)[N]) noexcept {
	return N;
}


int main() {

	const char name[] = "J. P. Briggs";
	std::cout << array_size(name) << std::endl;
	return 0;
}
