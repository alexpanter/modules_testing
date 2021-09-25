GCC=g++-11 -std=c++20 -fmodules-ts
APP=app

build: std_headers mathlib main

std_headers:
	$(GCC) -xc++-system-header iostream

mathlib: mathlib.cpp
	$(GCC) -c $< -o $@.o
	$(GCC) -shared $@.o -o libmathlib.so

main: main.cpp
	$(GCC) $< -o $(APP) -Xlinker ./libmathlib.so

clean:
	@rm -rf gcm.cache/
	@rm -f *.o
	@rm -f $(APP)
	@rm -f *.so
