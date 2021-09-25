GCC=g++-11 -std=c++20 -fmodules-ts
ENGINE=libengine.so
LINKENGINE=-Xlinker ./../engine/$(ENGINE)
APP=testgame

all: gamelib test

run:
	./$(APP)

gamelib: gamelib.cpp
	$(GCC) -c $<

test: test.cpp
	$(GCC) $< *.o -o $(APP) $(LINKENGINE)

create_symlink:
	ln -s ../gcm.cache gcm.cache

clean:
	@rm -rf gcm.cache/
	@rm -f *.o
	@rm -f $(APP)
