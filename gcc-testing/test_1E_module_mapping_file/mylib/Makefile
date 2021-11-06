GCC=g++-11 -std=c++20 -fmodules-ts
MODMAP= -fmodule-mapper=module_mapper.txt
all: mylib.o

mylib-part.o : mylib-part.cpp
	$(GCC) $(MODMAP) -c $< -o $@

mylib.o : mylib.cpp mylib-part.o
	$(GCC) $(MODMAP) -c $< -o $@

clean:
	@rm -f *.o
