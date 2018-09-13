#include <stdio.h>

#include <fstream>
#include <iostream>
#include <map>
#include <regex>
#include <string>

namespace emc {
namespace base {

std::string read_all(const char* file) {
	std::ifstream is (file, std::ifstream::binary);
	if (!is) {
		fprintf(stderr, "bad file");
		exit(-1);
	}

	is.seekg (0, is.end);
	int length = is.tellg();
	is.seekg (0, is.beg);

	char * buffer = new char [length];
	is.read (buffer, length);
	if (!is) {
		fprintf(stderr, "bad file");
		exit(-1);
	}
	is.close();

	std::string res(buffer, length);
	delete[] buffer;

	return res;
}

std::string render(const char* file, const std::map<std::string, std::string>& args) {
	std::string tmpl = read_all(file);

	for (auto it : args) {
		std::regex e ("\\$\\{\\{" + it.first + "\\}\\}");
		tmpl = std::regex_replace (tmpl, e, it.second);
	}
	return tmpl;
}

} // namespace base
} // namespace emc
