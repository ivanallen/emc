/**
 * Author: Allen (ivan_allen@qq.com)
 *
 * 类型过滤器
 */

#include <cxxabi.h> // for abi::__cxa_demangle
#include <string>

namespace emc {
namespace base {

// example:
// echo 'PFPFiiEiiE' | c++filter
// output: int (* (*)(int, int))(int)
std::string cpp_filter(const char* type) {
	int status = 0;
	char* realname = abi::__cxa_demangle(type, 0, 0, &status);
	std::string ret(realname);
	free(realname);
	return ret;
}

} // namespace base
} // namespace emc
