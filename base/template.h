#pragma once
#include <map>
#include <string>


namespace emc {
namespace base {

std::string render(const char* file, const std::map<std::string, std::string>& args);

} // namespace base
} // namespace emc
