# Modules Testing #

Modules is a (less-now) brand new and confusing feature of C++20,
intended to revolutionize the way we compile and build our C++
projects. Unfortunately, while promising a lot of benefits,
compiler support is fairly limited.

Across the major compiler vendors, I have tried and tested modules
with clang-11 and gcc-11. I have not tried it with msvc, though I'm
being told that Microsoft has adopted modules into their visual C++
compiler pretty well (except that it doesn't support module partitions
at the time of writing this, Sep. 2021).

Module support is experimental in all major compilers. And though several
build systems claim to have support (xmake, cmake, bazel), they are still
limited to what the compilers can do. Premake has no system yet, and though
I tried with a proposal for that build system, compiler support is not yet
sufficiently mature.

## [Update Nov 8th 2021] ##

After switching to Ubuntu 21 and updating package archives, I got access to the latest
GCC build, which currently is GCC 11.2. Module support is still not fully implemented,
though a lot of bugs have been fixed since version 11.1. Full list of missing features
can be found [here]
(https://gcc.gnu.org/onlinedocs/gcc/C_002b_002b-Modules.html#C_002b_002b-Modules).

Notably, missing feature is exported symbols from module partitions. But I have faith
this will be added within reasonable time.

## How can I learn? ##

Here, I list a few articles which were particularly helpful to me:

* [cppreference](https://en.cppreference.com/w/cpp/language/modules)
* [cor3ntin](https://cor3ntin.github.io/posts/modules/)
* [modernescpp](https://www.modernescpp.com/index.php/cpp20-modules)
* [modernescpp](https://www.modernescpp.com/index.php/component/jaggyblog/c-20-module-interface-unit-and-module-implementation-unit#comment-77890)
* [GCC technical info](https://splichal.eu/scripts/sphinx/gcc/_build/html/gcc-command-options/c%2B%2B-modules.html)
* [vector-of-bool](https://vector-of-bool.github.io/2019/03/10/modules-1.html)
* [block.feabhas](https://blog.feabhas.com/2021/08/c20-modules-with-gcc11/)


## What are my recommmendations? ##

So far, I would trust gcc the most. The compiler interface is simpler,
and the way it handles modules is (in my opinion) more intuitive.
gcc-11 is still an experimental release meaning that modules really is
the bleeding edge.

But I have managed to get gcc working with the following items:
- module partitions
- compiling standard library headers into modules (iostream, algorithm, cstdlib, etc.)
- building and linking with a shared library which exposes a module (no DLL import/export macros needed so far)

Other things I have found with modules:
- DLL export/import directives are not necessary (finally, we can get rid of them!)
- Libraries can be built and linked without a single header file (Noice!)
- Code is greatly simplified with no distinction between declaration and definition
- We can stop writing `inline` everywhere, and obtain some of the original meaning of that word
- Modules are very simple to work with

C++ is a complicated language. Nobody can disagree. So I'm a huge fan of features
that simplify the language. Together with proposals for pattern matching with is/as,
in/out parameter keywords, concepts, etc., modules is an significant effort in that
direction.

As a test, I was using the xxhash library for testing wrapping a third-party
header-only library inside a module. I could not get this to work. So the
solution so far was to `#include` it in the global module fragment and then
provide module-exports manually around desired functions. A bit sad, but at
least I don't need to include the xxhash.hpp header in every file needed.
Which means I need only compile it once. So still better than the header-inclusion
approach.


## Downsides to using modules instead of headers ##

With header files, we can provide source code as binary, but still have documentation
available in the header-files, in a human-readable format. This is not possible/optimal
with the modularized approach, which is very sad. We can of course still provide
header files, but that kind of eliminates the purpose of having modules in the
first place.


## Upsides to using modules instead of headers ##

There are so many upsides that it's hard to determine where to begin. But I shall try.
This list abuses the concept of reverse psychology where we introduce the downfalls
of header-inclusion instead of the upsides of modules, and have the reader figure out
the rest.

#### Avoiding macro clashes ####

This is a common problem. Assume two different headers expose the same macro name,
and both these headers are included in the same translation unit. Not only is the order
in which these headers are included significant, but the code might not compile.

#### Macro name leak ####

Imagine a perfect world where everybody would end their header files with `#undef` for
every internally-defined macro which should not be exported. Well, leaks happen.

#### Circular reference ####

In a large software project, getting circular header dependencies is a very common
problem and hard to deal with. Header A can include header B, which includes header C,
which includes header A. Now we have a cycle. And depending on the include guards,
and the translation unit setup, this might or might not work.

#### inline variables ####

A typical use-case, at least before C++17, was to place a declaration of a public
variable inside a header file and have its corresponding definition in a .cpp source
file. Then C++-17 came along and allowed `static inline` variables as class members,
which sort of fixed the problem. But it's still messy.

#### templates ####

Without turning this into a quite large post, we can observe the staggering number
of header-only libraries developed for C++, mainly because of the dependency upon
heavily templated code. This means that all these library headers need to be parsed
many times in larger projects, which is very sad indeed.

#### Compiling the same headers many times ####

In software in general we consider DRY (don't repeat yourself) a very good pattern
to follow. Unfortunately though, with header-inclusion we might end up compiling
something like `stdlib.h` several hundred times for larger projects. A certain hack
called "precompiled headers" was added to major compilers to remedy this. But they
are tricky to deal with and require a bit of setup. Modules completely removes the
need for precompiled headers!


#### Many more ####

Feel free to add an issue, and I will extend this post.



## Conclusion ##

Modules will probably not be a magical fix to all C++-related problems,
but I am convinced that over time this has the potential to revolutionize
the language, remove a lot of the anger and resentment upon the complicated
build setups often required for C++-projects, and introduce a lot of new
programmers to the language who will happily live their lives unknowlingly
of the header-horrors of the past.

Arguably the most important feature in C++ since templates, modules will
greatly modernize the language and can potentially remove _a lot_ of
unnecessary complexity (I would argue at least 50%, thought that is clearly
and undocumented postulate!).

