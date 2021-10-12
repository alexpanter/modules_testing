GCC=g++-11 -std=c++20 -fmodules-ts

all: my_module.o my_module-part.o

my_module.o: my_module.cpp
	$(GCC) -c $< -o $@

my_module-part.o: my_module-part.cpp
	$(GCC) -c $< -o $@

clean:
	@rm -rf gcm.cache/
	@rm -f *.o
	@rm -f main
