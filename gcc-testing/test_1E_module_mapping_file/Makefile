MAKEFLAGS += --no-print-directory

all: mylib/mylib.o myexe/myexe.o

mylib/mylib.o:
	@cd mylib && make

myexe/myexe.o:
	@cd myexe && make

clean:
	@cd mylib && make clean
	@cd myexe && make clean
	@rm -rf gcm.cache
