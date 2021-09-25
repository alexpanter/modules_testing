CPP=clang++-11 -std=c++20 -stdlib=libc++
MOD_EXP=-fmodules-ts --precompile -x c++-module
MOD_IMP=-fmodules-ts -fprebuilt-module-path=.
USE_STD_MOD=-fimplicit-modules -fimplicit-module-maps

main: main.cpp mathlib
	$(CPP) $(MOD_IMP) $(USE_STD_MOD) $< -o $@ libmathlib.so -Wl,-rpath,./

mathlib: mathlib.cpp addfile.cpp subfile.cpp
	$(CPP) $(MOD_EXP) $< -o mathlib.pcm
	$(CPP) -shared *.pcm -o libmathlib.so

clean:
	rm -f *.pcm *.so main
