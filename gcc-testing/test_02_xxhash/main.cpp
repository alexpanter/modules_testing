import <iostream>;
import xxhashwrapper;

int main()
{
	const char* hej = "Hej med dig";
	uint64_t hash = hashing::Hash(hej);
	std::cout << hash << std::endl;
	return 0;
}
