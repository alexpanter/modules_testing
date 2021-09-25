export module mylibrary.other;
import <iostream>;

export void PrintOther()
{
	std::cout << "Good bye!\n";
}

export template<class T> class Vector
{
private:
	T x, y;

public:
	Vector(T _x, T _y) : x(_x), y(_y) {}

	void Write()
	{
		std::cout << "Vector{" << x << ", " << y << "}"
		          << std::endl;
	}
};
