import <iostream>;
import "iostream";

int main()
{
	std::cout << "5 > 4: " << std::boolalpha
	          << is_greater(5, 4) << '\n';

	std::cout << "5.74 > 3.16: " << std::boolalpha
	          << is_greater(5.74, 3.16) << '\n';

	return 0;
}
