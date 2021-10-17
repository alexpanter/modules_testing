GCC=g++-11 -std=c++20 -fmodules-ts

all: logging.o main

test: all
	./main

std_headers:
	$(GCC) -xc++-system-header iostream

logging.o: logging.cpp log_helper.hpp
	$(GCC) -c $< -o $@

main: main.cpp logging.o
	$(GCC) $^ -o $@

clean:
	@rm -rf gcm.cache/
	@rm -f *.o
	@rm -f main
