GCC=g++-11 -std=c++20 -fmodules-ts
APP=app

build: std_headers mathlib main.o
	$(GCC) *.o -o $(APP)

std_headers:
	$(GCC) -xc++-system-header iostream

mathlib: mathlib_add.cpp mathlib_sub.cpp mathlib.cpp
	$(GCC) -c mathlib_add.cpp
	$(GCC) -c mathlib_sub.cpp
	$(GCC) -c mathlib.cpp

main.o: main.cpp
	$(GCC) -c $<

clean:
	@rm -rf gcm.cache/
	@rm -f *.o
	@rm -f $(APP)
