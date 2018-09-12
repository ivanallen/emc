#pragma once

namespace emc {
namespace base {
namespace color {

extern const char* black;
extern const char* red;
extern const char* green;
extern const char* yellow;
extern const char* blue;
extern const char* magenta;
extern const char* cyan;
extern const char* white;

} // namespace color

namespace cntl {
extern const char* def; // Default color and effects
extern const char* bld; // Bold\brighter
extern const char* dim; // Dim\darker
extern const char* cur; // Italic font
extern const char* und; // Underline
extern const char* inv; // Inverted
extern const char* cof; // Cursor Off
extern const char* con; // Cursor On
}

namespace cur {
	void xy(int x, int y, const char* s);
}

} // namespace base
} // namespace emc
