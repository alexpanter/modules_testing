GCC=g++-11 -std=c++20 -fmodules-ts
LIB=libengine.so

SOURCES=$(shell find . ! -name "engine.cpp" -name "*.cpp")
OBJECTS=$(SOURCES:%.cpp=%.o)

.PHONY: all clean
.SUFFIXES: .cpp .o

all: std_headers build engine

build: $(OBJECTS)

list_sources:
	@echo "SOURCES:"
	@echo $(SOURCES)
	@echo ""
	@echo "OBJECTS:"
	@echo $(OBJECTS)

.cpp.o:
	$(GCC) -c $< -o $@

std_headers:
	$(GCC) -xc++-system-header cstdint
	$(GCC) -xc++-system-header iostream
	$(GCC) -xc++-system-header vector

engine: engine.cpp
	$(GCC) -c $< -o $@.o
	$(GCC) -shared *.o **/*.o -o $(LIB)

create_symlink:
	ln -s ../gcm.cache gcm.cache

clean:
	rm -f $(LIB)
	rm -f *.o
	rm  -f **/*.o
	rm -rf gcm.cache/
