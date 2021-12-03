# Based on
# - https://blog.ecosta.dev/en/tech/cpp-modules-with-clang
# - https://clang.llvm.org/docs/Modules.html 

MOD_EXP=-std=c++20 -c -Xclang -emit-module-interface              
MOD_IMP=-std=c++20 -fmodules -c -fprebuilt-module-path=.              

main: main.cpp mathlib
	$(CPP) $(MOD_IMP) $< -o $@.o
	$(CPP) -std=c++2a -fmodules -o main $@.o *.pcm

mathlib: mathlib.cpp
	$(CPP) $(MOD_EXP) $< -o $@.pcm

clean:
	rm -f *.o *.pcm main
