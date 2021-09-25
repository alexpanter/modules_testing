CPP=clang++-11 -std=c++20 -stdlib=libc++ -fms-extensions
MOD_EXP=-fmodules-ts --precompile -x c++-module
MOD_IMP=-fmodules-ts -fprebuilt-module-path=.
USE_STD_MOD=-fimplicit-modules -fimplicit-module-maps
DLL_EXP=-fvisibility=default

main: main.cpp mathlib
	$(CPP) $(MOD_IMP) $(DLL_EXP) $(USE_STD_MOD)  $< -o $@ libmathlib.so -Wl,-rpath,./

mathlib: addlib.cpp sublib.cpp
	$(CPP) $(MOD_EXP) $^
	$(CPP) $(DLL_EXP) -shared *.pcm -o libmathlib.so

clean:
	rm -f *.pcm *.so main
