GCC=g++-11 -std=c++20 -fmodules-ts
LINKENGINE=-I . -L. libengine.so
APP=testgame

all: app

test: app
	./$(APP)

buildengine:
	@cd engine/ && make && make engine

copyengine:
	@mkdir -p gcm.cache
	@cp -r engine/gcm.cache .
	@cp engine/*.so .

app: test.cpp
	$(GCC) $< $(LINKENGINE) -o $@

clean:
	@rm -rf gcm.cache/
	@rm -f *.o
	@rm -f $(APP)
