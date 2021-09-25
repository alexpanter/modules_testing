CPP=clang++-11 -std=c++20 -stdlib=libc++
MOD_EXP=-fmodules-ts --precompile -x c++-module
MOD_IMP=-fmodules-ts -fprebuilt-module-path=.
USE_STD_MOD=-fimplicit-modules -fimplicit-module-maps

main: main.cpp
	$(CPP) $(MOD_IMP) $(USE_STD_MOD) $< *.pcm -o $@

mathlib: addfile.cpp
	$(CPP) $(MOD_EXP) $^ -o $@.pcm

testmathlib: mathlib.cpp addfile.cpp subfile.cpp
	$(CPP) $(MOD_EXP) $< -o mathlib.pcm

clean:
	rm -f *.pcm main
