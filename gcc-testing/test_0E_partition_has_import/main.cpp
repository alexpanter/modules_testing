import <iostream>;
import partitioned_module;

int main()
{
	std::cout << "get_1(): " << get_1() << '\n';
	std::cout << "get_magic(): " << get_magic() << '\n';

	// ERROR:
	// Fixed only when partitioned_module:part
	// export-imports some_module !
	std::cout << "magic_number(): " << magic_number() << '\n';

	return 0;
}

