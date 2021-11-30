GCC=g++-11 -std=c++20 -fmodules-ts

build : mymodule main

all: std_headers mymodule main

test: all
	./main

std_headers:
	$(GCC) -xc++-system-header iostream

mymodule_implementation.o: mymodule_implementation.cpp
	$(GCC) -c $< -o $@

mymodule_interface.o: mymodule_interface.cpp
	$(GCC) -c $< -o $@

mymodule: mymodule_interface.o mymodule_implementation.o

main: main.cpp
	$(GCC) $< *.o -o $@

clean:
	@rm -rf gcm.cache/
	@rm -f *.o
	@rm -f main
