GCC=g++-11 -std=c++20 -fmodules-ts
APP=app

build: std_headers partitions main
	$(GCC) *.o -o $(APP)

std_headers:
	$(GCC) -xc++-system-header iostream

partitions: partition1.cpp partition2.cpp partition3.cpp partition.cpp
	$(GCC) -c partition1.cpp
	$(GCC) -c partition2.cpp
	$(GCC) -c partition3.cpp
	$(GCC) -c partition.cpp

main: main.cpp
	$(GCC) -c $< -o $@.o

clean:
	@rm -rf gcm.cache/
	@rm -f *.o
	@rm -f $(APP)
