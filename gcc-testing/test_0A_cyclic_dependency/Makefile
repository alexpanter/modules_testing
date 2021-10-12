GCC=g++-11 -std=c++20 -fmodules-ts

module_a: module_a.cpp
	$(GCC) -c $< -o $@.o

module_b: module_b.cpp
	$(GCC) -c $< -o $@.o

clean:
	rm -f *.o
