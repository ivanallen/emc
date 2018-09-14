/**
 * Author: Allen
 *
 * 类型萃取
 * 参考：https://stackoverflow.com/questions/18369128/how-can-i-see-the-type-deduced-for-a-template-type-parameter
 */

#include <string>
#include <typeinfo>       // operator typeid
#include <type_traits>    // for std::remove_reference

#include "cpp_filter.h"

namespace emc {
namespace base {

// 应该能满足大部分需求了
template <typename T>
std::string type_name()
{
    typedef typename std::remove_reference<T>::type TR;
    std::string r;

    if (std::is_const<TR>::value) {
		if (!r.empty()) r += " ";
        r += "const";
	}

    if (std::is_volatile<TR>::value) {
		if (!r.empty()) r += " ";
        r += "volatile";
	}

	if (!r.empty()) r += " ";
	r += cpp_filter(typeid(TR).name());

    if (std::is_array<TR>::value) {
		size_t found = r.find("[");
		size_t last = found;
		while(found != std::string::npos) {
			last = found;
			if (found < r.length() - 1 && r[found + 1] != '*') {
				break;
			}
			found = r.find("[", found + 1);
		}
		if (std::is_lvalue_reference<T>::value) {
			r.replace(last, 0, "(&)");
		} else if (std::is_rvalue_reference<T>::value) {
			r.replace(last, 0, "(&&)");
		}
	} else if (std::is_function<TR>::value) {
		size_t found = r.find("(");
		size_t last = found;
		while(found != std::string::npos) {
			last = found;
			if (found < r.length() - 1 && r[found + 1] != '*') {
				break;
			}
			found = r.find("(", found + 1);
		}
		if (std::is_lvalue_reference<T>::value) {
			r.replace(last, 0, "(&)");
		} else if (std::is_rvalue_reference<T>::value) {
			r.replace(last, 0, "(&&)");
		}
	} else {
		if (std::is_lvalue_reference<T>::value)
			r += "&";
		else if (std::is_rvalue_reference<T>::value)
			r += "&&";
	}
    return r;
}

} // namespace base
} // namespace emc
