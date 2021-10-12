GCC=g++-11 -std=c++20 -fmodules-ts

all: std_headers usr_headers main

test: all
	./main

std_headers:
	$(GCC) -xc++-system-header iostream

usr_headers: iostream
	$(GCC) -xc++-user-header -I. iostream

main: main.cpp
	$(GCC) $^ -o $@

clean:
	@rm -rf gcm.cache/
	@rm -f main
