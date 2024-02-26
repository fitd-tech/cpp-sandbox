https://cplusplus.com/doc/tutorial/

Compiler info
https://cplusplus.com/doc/tutorial/introduction/

Sample compile command:
    clang++ -std=c++17 -stdlib=libc++ first_program.cpp -o first_program
Run the program:
    ./first_program

Makefile:
    build: make
    remove files: make clean

Tutorial with exercises:
https://learn.saylor.org/course/view.php?id=65&sectionid=613#section-1

Google C++ Style Guide:
https://google.github.io/styleguide/cppguide.html

Test framework:
https://github.com/google/googletest
User's Guide:
https://google.github.io/googletest/
This guide recommends updating the URL in the FetchContent_Declare section of CMakeLists.txt often. Replace the hash with the latest commit hash here:
https://github.com/google/googletest/commits/main
Testing process:
    rm -rf build
    cmake -S . -B build
    cmake --build build
    cd build && ctest --output-on-failure

Intellisense issues with include path:
https://github.com/microsoft/vscode-cpptools/issues/6025
Resolved by simply declaring the full path to dependencies
We only have to do this once for the test framework (e.g., ${workspaceFolder}/cpp/test_example/build/_deps/googletest-src/googletest/include/)
But we should re-run this build regularly to make sure the library is up-to-date

Compiler errors:
    Undefined symbols for architecture arm64
        Your function definition and function prototype signatures have to match exactly
        Example:
            std::vector<std::string> TestingOneTwo(const std::vector<std::string> &lines) { ...etc }
            and
            std::vector<std::string> TestingOneTwo(std::vector<std::string> &lines);
            will throw an error because of the missing const

Debugger:
    View the program file (the one that matches the final program name, not the one ending in _main) to automatically make and debug
    Just make sure you set at least one breakpoint and build your .o files with -g