/**
 * 情况一：模板参数是引用或指针，但不是通用引用(Universal Reference)
 * template<typename T>
 * f(T&)
 * f(const T&)
 * f(T*)
 */

#include <iostream>
#include <string>

#include <base.h>

using namespace emc::base;

template<typename T>
void f1(T& param) {
	std::cout << "    " << color::yellow << "T :" << color::green << type_name<T>() << cntl::def << std::endl;
	std::cout << "    " << color::yellow << "T&:" << color::green << type_name<T&>() << cntl::def << std::endl;
}

template<typename T>
void f2(const T& param) {
	std::cout << "    " << color::yellow << "T :" << color::green << type_name<T>() << cntl::def << std::endl;
	std::cout << "    " << color::yellow << "const T&:" << color::green << type_name<const T&>() << cntl::def << std::endl;
}

int main() {
	int x = 27;
	const int cx = x;
	const int& rx = x;

	std::cout << "f(T&)" << std::endl;
	std::cout << std::endl;


	std::cout << "int x = 27; f(x);" << std::endl;
	f1(x);
	std::cout << std::endl;

	std::cout << "const int cx = x; f(cx);" << std::endl;
	f1(cx);
	std::cout << std::endl;

	std::cout << "const int& rx = x; f(rx);" << std::endl;
	f1(rx);
	std::cout << std::endl;

	std::cout << "f(const T&)" << std::endl;
	std::cout << std::endl;

	std::cout << "int x = 27; f(x);" << std::endl;
	f2(x);
	std::cout << std::endl;

	std::cout << "const int cx = x; f(cx);" << std::endl;
	f2(cx);
	std::cout << std::endl;

	std::cout << "const int& rx = x; f(rx);" << std::endl;
	f2(rx);
	std::cout << std::endl;

	return 0;
}
