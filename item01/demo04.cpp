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
void f(T&& param, std::string& type_of_t, std::string& type_of_param) {
	type_of_t = type_name<T>();
	type_of_param = type_name<decltype(param)>();
}


int main() {
	int x = 27;
	const int cx = x;
	const int& rx = x;

	std::string tx, px;
	std::string tcx, pcx;
	std::string trx, prx;
	std::string t27, p27;

	f(x, tx, px);
	f(cx, tcx, pcx);
	f(rx, trx, prx);
	f(27, t27, p27);


	std::cout << render("output04.tmpl", {
		{"variable", color::yellow},
		{"comment", color::cyan},
		{"default", cntl::def},
		{"param_type", "T&&"},
		{"type_x", "int"},
		{"type_cx", "const int"},
		{"type_rx", "const int&"},
		{"tx", tx},
		{"tcx", tcx},
		{"trx", trx},
		{"t27", t27},
		{"px", px},
		{"pcx", pcx},
		{"prx", prx},
		{"p27", p27},
	});

	return 0;
}
