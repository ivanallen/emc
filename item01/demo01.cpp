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
std::string f1(T& param) {
	return type_name<T>();
}

template<typename T>
void f2(const T& param) {
	return type_name<T>();
}

void test1() {
}

int main() {
	int x = 27;
	const int cx = x;
	const int& rx = x;

	std::string tx = f1(x);
	std::string tcx = f1(cx);
	std::string trx = f1(rx);


	std::cout << render("output.tmpl", {
		{"variable", color::yellow},
		{"comment", color::cyan},
		{"default", cntl::def},
		{"tx", tx},
		{"tcx", tcx},
		{"trx", trx},
		{"px", tx + "&"},
		{"pcx", tcx + "&"},
		{"prx", trx + "&"}
	});

	return 0;
}
