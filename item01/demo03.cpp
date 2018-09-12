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
void f(T* param, std::string& type_of_t, std::string& type_of_param) {
	type_of_t = type_name<T>();
	type_of_param = type_name<decltype(param)>();
}


int main() {
	int x = 27;
	int* cx = &x;
	const int* rx = &x;

	std::string tx, px;
	std::string tcx, pcx;
	std::string trx, prx;

	f(&x, tx, px);
	f(cx, tcx, pcx);
	f(rx, trx, prx);


	std::cout << render("output03.tmpl", {
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
		{"px", px},
		{"pcx", pcx},
		{"prx", prx},
	});

	return 0;
}
