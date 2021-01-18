import addlib;
import sublib;
import <iostream>;

int main()
{
	std::cout << "3 + 5 = "
	          << add(3, 5) << "\n";
	std::cout << "8 - 2 = "
	          << sub(8, 2) << "\n";
	return 0;
}
