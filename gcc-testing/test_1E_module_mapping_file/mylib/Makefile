GCC=g++-11 -std=c++20 -fmodules-ts -fmodule-mapper=module_mapper.txt

all: mylib.o

mylib.o : mylib.cpp
	$(GCC) -c $< -o $@

clean:
	@rm -f *.o
	@rm -rf gcm.cache/
