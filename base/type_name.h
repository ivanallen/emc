/**
 * Author: Allen
 *
 * 类型萃取
 */

#include <string>
#include <typeinfo>       // operator typeid
#include <type_traits>    // for std::remove_reference

#include "cpp_filter.h"

namespace emc {
namespace base {

template <typename T>
std::string type_name()
{
    typedef typename std::remove_reference<T>::type TR;
    std::string r;

	//if (!r.empty()) r += " ";
	r += cpp_filter(typeid(TR).name());

    if (std::is_const<TR>::value) {
		if (!r.empty()) r += " ";
        r += "const";
	}

    if (std::is_volatile<TR>::value) {
		if (!r.empty()) r += " ";
        r += "volatile";
	}


    if (std::is_lvalue_reference<T>::value)
        r += "&";
    else if (std::is_rvalue_reference<T>::value)
        r += "&&";
    return r;
}

} // namespace base
} // namespace emc
