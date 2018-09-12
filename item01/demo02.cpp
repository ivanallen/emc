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
std::string f(const T& param) {
	return type_name<T>();
}


int main() {
	int x = 27;
	const int cx = x;
	const int& rx = x;

	std::string tx = f(x);
	std::string tcx = f(cx);
	std::string trx = f(rx);


	std::cout << render("output.tmpl", {
		{"variable", color::yellow},
		{"comment", color::cyan},
		{"default", cntl::def},
		{"param_type", "const T&"},
		{"tx", tx},
		{"tcx", tcx},
		{"trx", trx},
		{"px", "const " + tx + "&"},
		{"pcx", "const " + tcx + "&"},
		{"prx", "const " + trx + "&"}
	});

	return 0;
}
