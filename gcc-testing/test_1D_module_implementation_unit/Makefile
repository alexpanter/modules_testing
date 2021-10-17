GCC=g++-11 -std=c++20 -fmodules-ts

all: std_headers module_2.o module_1.o main

test: all
	./main

std_headers:
	$(GCC) -xc++-system-header iostream

mymodule: mymodule-implementation.cpp mymodule-interface.cpp
	$(GCC) -c mymodule-implementation.cpp
	$(GCC) -c mymodule-interface.cpp

main: main.cpp
	$(GCC) $< *.o -o $@

clean:
	@rm -rf gcm.cache/
	@rm -f *.o
	@rm -f main
