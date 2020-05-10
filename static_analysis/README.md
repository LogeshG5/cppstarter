### Clang Tidy

This will run `/usr/bin/clang-tidy -checks=*` on each of the C++ source files in the project being built.

```bash
cmake "-DCMAKE_CXX_CLANG_TIDY=/usr/bin/clang-tidy;-checks=*" ../path/to/source
```

### CppCheck

This will run `/usr/bin/cppcheck --std=c++17 --source=/path/to/source/file.cxx`  on each c++ file in the project being built.

```bash
cmake "-DCMAKE_CXX_CPPCHECK=/usr/bin/cppcheck;--std=c++17" ../path/to/source
```

### CppLint

This will run /usr/local/bin/cpplint `--linelength=79` on each c++ file in the project being built.

```bash
cmake "-DCMAKE_CXX_CPPLINT=/usr/local/bin/cpplint;--linelength=79" ..
```

### IWYU

This will run `/usr/bin/iwyu --transitive_includes_only` on each c++ file in the project being built.

```bash
cmake "-DCMAKE_CXX_INCLUDE_WHAT_YOU_USE=/usr/bin/iwyu;--transitive_includes_only" ..
```

### LWYU

```bash
cmake -DCMAKE_LINK_WHAT_YOU_USE=TRUE ..
```