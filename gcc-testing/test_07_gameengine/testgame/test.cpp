import engine;
import gamelib;
import <iostream>;
import <vector>;

int main()
{
	I32 someInt = 32;
	std::cout << "someInt: " << someInt << "\n";

	std::vector<I32> vec = {1, 2, 3, 4, 5};
	for (auto i : vec) std::cout << i << ' ';
	std::cout << '\n';

	std::cout << SayHi() << '\n';

	return 0;
}
