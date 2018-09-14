/**
 * 情况一：模板参数既非引用也非指针
 * template<typename T>
 * f(T)
 */

#include <iostream>
#include <string>

#include <base.h>

using namespace emc::base;

template<typename T>
void f(T param, std::string& type_of_t, std::string& type_of_param) {
	type_of_t = type_name<T>();
	type_of_param = type_name<decltype(param)>();
}

void some_func(int, double) {};

int main() {

	std::string tfunc, pfunc;
	f(some_func, tfunc, pfunc);


	std::cout << render("output09.tmpl", {
		{"variable", color::yellow},
		{"comment", color::cyan},
		{"default", cntl::def},
		{"tfunc", tfunc},
		{"pfunc", pfunc},
	});

	return 0;
}
