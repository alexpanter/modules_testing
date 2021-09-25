import <iostream>;
import mathlib;


int main()
{
	int a = 5;
	int b = 6;
	std::cout << "a = " << a << ", b = " << b << '\n';

	std::cout << "a+b = " << mathlib::add(a, b) << '\n';
	std::cout << "a-b = " << mathlib::sub(a, b) << '\n';
	std::cout << "a*b = " << mathlib::mul(a, b) << '\n';
	std::cout << "a/b = " << mathlib::div(a, b) << '\n';

	return 0;
}

