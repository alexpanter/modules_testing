MODMAP=-fmodule-mapper=module_mapper.txt
GCC=g++-11 -std=c++20 -fmodules-ts

all: std_headers myexe

std_headers:
	cd .. && $(GCC) -xc++-system-header iostream

myexe: myexe.cpp
	$(GCC) $(MODMAP) $< ../mylib/*.o -o $@

clean:
	@rm -f *.o
	@rm -f myexe
