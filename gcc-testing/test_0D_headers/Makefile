GCC=g++-11 -std=c++20 -fmodules-ts

std_headers:
	$(GCC) -xc++-system-header iostream

some_header: some_header.hpp
	$(GCC) -xc++-system-header -I. some_header.hpp

main: main.cpp
	$(GCC) $^ -o $@

clean:
	@rm -rf gcm.cache/
	@rm -f main
