GCC=g++-11 -std=c++20 -fmodules-ts

all: main

test: main
	./main

main: main.cpp
	$(GCC) $< -o $@

clean:
	@rm -rf gcm.cache/
	@rm -f *.o
	@rm -f main
