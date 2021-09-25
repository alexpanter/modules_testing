GCC=g++-11 -std=c++20 -fmodules-ts
APP=app

build: std_headers xxhash_wrapper.o main.o
	$(GCC) *.o -o $(APP)

std_headers:
	$(GCC) -xc++-system-header iostream
	$(GCC) -xc++-system-header cstdint
	$(GCC) -xc++-system-header cstring
	$(GCC) -xc++-system-header array
	$(GCC) -xc++-system-header type_traits
	$(GCC) -xc++-system-header string
	$(GCC) -xc++-system-header vector

xxhash_wrapper.o: vendor/xxhash_wrapper.cpp
	$(GCC) -c $<

main.o: main.cpp
	$(GCC) -c $<

clean:
	@rm -rf gcm.cache/
	@rm -f *.o
	@rm -f $(APP)
