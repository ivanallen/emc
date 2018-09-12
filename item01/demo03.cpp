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
std::string f(T* param) {
	return type_name<T>();
}


int main() {
	int x = 27;
	int* cx = &x;
	const int* rx = &x;

	std::string tx = f(&x);
	std::string tcx = f(cx);
	std::string trx = f(rx);


	std::cout << render("output.tmpl", {
		{"variable", color::yellow},
		{"comment", color::cyan},
		{"default", cntl::def},
		{"param_type", "T*"},
		{"type_x", "int"},
		{"type_cx", "int*"},
		{"type_rx", "const int*"},
		{"tx", tx},
		{"tcx", tcx},
		{"trx", trx},
		{"px", tx + "*"},
		{"pcx", tcx + "*"},
		{"prx", trx + "*"}
	});

	return 0;
}
