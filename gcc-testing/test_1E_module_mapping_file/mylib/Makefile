GCC=g++-11 -std=c++20 -fmodules-ts
MODMAP= -fmodule-mapper=module_mapper.txt
all: mylib.o

mylib.o : mylib.cpp
	$(GCC) $(MODMAP) -c $< -o $@

clean:
	@rm -f *.o
