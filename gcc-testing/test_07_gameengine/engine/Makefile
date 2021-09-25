GCC=g++-11 -std=c++20 -fmodules-ts -fvisibility=default

# TODO: export to shared lib
LIB=engine.so

SOURCES=$(shell find . ! -name "engine.cpp" -name "*.cpp")
OBJECTS=$(SOURCES:%.cpp=%.o)

.PHONY: all clean
.SUFFIXES: .cpp .o

build: $(OBJECTS)

.cpp.o:
	$(GCC) -c -fPIC $< -o $@

std_headers:
	$(GCC) -xc++-system-header cstdint

engine: engine.cpp
	$(GCC) -c -fPIC $< -o $@.o
	$(GCC) -shared **/*.o -o libengine.so

clean:
	rm -f *.o
	rm  -f **/*.o
	rm -rf gcm.cache/
