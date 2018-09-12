#include <stdio.h>
#include "term.h"

namespace emc {
namespace base {
namespace color {

const char* black = "\e[30m";
const char* red = "\e[31m";
const char* green = "\e[32m";
const char* yellow = "\e[33m";
const char* blue = "\e[34m";
const char* magenta = "\e[35m";
const char* cyan = "\e[36m";
const char* white = "\e[37m";

} // namespace color

namespace cntl {
const char* def = "\e[0m"; // Default color and effects
const char* bld = "\e[1m"; // Bold\brighter
const char* dim = "\e[2m"; // Dim\darker
const char* cur = "\e[3m"; // Italic font
const char* und = "\e[4m"; // Underline
const char* inv = "\e[7m"; // Inverted
const char* cof = "\e[?25l"; // Cursor Off
const char* con = "\e[?25h"; // Cursor On
}

namespace cur {
	void xy(int x, int y, const char* s) {
		printf("\e[%d;%dH%s", y, x, s);
	}
}

} // namespace base
} // namespace emc
