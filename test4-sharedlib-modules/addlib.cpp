
export module addlib;

export __attribute__((visibility("default"))) int add(int a, int b)
{
	return 3 * (a + b);
}
