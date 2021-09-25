CPP=clang++-11 -std=c++20 -stdlib=libc++
MOD_EXP=-fmodules-ts --precompile -x c++-module
MOD_IMP=-fmodules-ts -fprebuilt-module-path=.
USE_STD_MOD=-fimplicit-modules -fimplicit-module-maps

main: main.cpp mathlib
	$(CPP) $(MOD_IMP) $(USE_STD_MOD) $< *.pcm -o $@

mathlib: mathlib.cpp
	$(CPP) $(MOD_EXP) $< -o $@.pcm

clean:
	rm -f *.pcm main
