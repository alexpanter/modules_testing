GCC=g++-11 -std=c++20 -fmodules-ts
APP=app

#SOURCES:=$(wildcard "mathlib/*.cpp")
#SOURCES:=$(filter-out main.cpp, $(SOURCES))
SOURCES=$(shell find mathlib/ ! -name "main.cpp" -name "*.cpp")
OBJECTS=$(SOURCES:%.cpp=%.o)

MODULES=$(wildcard "*.cppm")
MODOBJS=$(MODULES:%.cppm=%.o)

.PHONY: all clean
.SUFFIXES: .cpp .o

all: build

build: std_headers $(OBJECTS) $(MODOBJS) main

.cpp.o:
	$(GCC) -c $< -o $@

%.o: %.cpp
	$(GCC) -c $< -o $@

exe: std_headers $(OBJECTS)
	$(GCC) *.o -o $(APP)

std_headers:
	$(GCC) -xc++-system-header iostream

main: main.cpp
	$(GCC) $< *.o -o $@

clean:
	@rm -rf gcm.cache/
	@rm -f *.o
	@rm -f $(APP)
