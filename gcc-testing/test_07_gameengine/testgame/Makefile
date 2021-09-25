GCC=g++-11 -std=c++20 -fmodules-ts
ENGINE=libengine.so
LINKENGINE=-Xlinker ./../engine/$(ENGINE)
APP=testgame

SOURCES=$(shell find . ! -name "test.cpp" -name "*.cpp")
OBJECTS=$(SOURCES:%.cpp=%.o)

all: build test

run:
	./$(APP)

build: $(OBJECTS)

list_sources:
	@echo "SOURCES:"
	@echo $(SOURCES)
	@echo ""
	@echo "OBJECTS:"
	@echo $(OBJECTS)

.cpp.o:
	$(GCC) -c $< -o $@

test: test.cpp
	$(GCC) $< *.o -o $(APP) $(LINKENGINE)

clean:
	@rm -f *.o
	@rm -f $(APP)
