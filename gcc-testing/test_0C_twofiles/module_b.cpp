#include <cstring>

export module module_b;

export const char* _b()
{
	return "b";
}

export int get_len()
{
	return strlen(_b());
}
