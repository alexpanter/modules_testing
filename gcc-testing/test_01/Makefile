GCC=g++-11 -std=c++20 -fmodules-ts
APP=app

build: std_headers my_library.o other_library.o main.o
	$(GCC) *.o -o $(APP)

std_headers:
	$(GCC) -xc++-system-header iostream

my_library.o: my_library.cpp
	$(GCC) -c $<

other_library.o: other_library.cpp
	$(GCC) -c $<

main.o: main.cpp
	$(GCC) -c $<

clean:
	@rm -rf gcm.cache/
	@rm -f *.o
	@rm -f $(APP)
