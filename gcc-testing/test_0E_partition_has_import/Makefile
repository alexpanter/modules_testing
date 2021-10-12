GCC=g++-11 -std=c++20 -fmodules-ts

all: std_headers some_module.o partitioned_module.o main

test: all
	./main

std_headers:
	$(GCC) -xc++-system-header iostream

some_module.o: some_module.cpp
	$(GCC) -c $< -o $@

partitioned_module.o: partitioned_module-part.cpp partitioned_module.cpp
	$(GCC) -c $^

main: main.cpp
	$(GCC) $< *.o -o $@

clean:
	@rm -rf gcm.cache/
	@rm -f *.o
	@rm -f main
