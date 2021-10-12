export module module_a;

import module_b;

export const char* a()
{
	return "a";
}

export const char* b()
{
	return _b();
}
