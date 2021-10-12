GCC=g++-11 -std=c++20 -fmodules-ts

std_headers:
	$(GCC) -xc++-system-header iostream

module_a.o: module_a.cpp module_b.cpp
	$(GCC) -c module_b.cpp -o module_b.o
	$(GCC) -c module_a.cpp -o module_a.o

main: main.cpp module_a.o module_b.o
	$(GCC) $^ -o $@

clean:
	@rm -rf gcm.cache/
	@rm -f *.o
	@rm -f main
