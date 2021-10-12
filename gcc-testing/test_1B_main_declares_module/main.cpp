module;

#include <iostream>

export module main_module;

export int exported_function()
{
	return 42;
}

int main()
{
	std::cout << "41 < " << exported_function() << '\n';
	return 0;
}
