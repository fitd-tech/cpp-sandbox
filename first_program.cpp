// My first program in C++
#include <iostream>
// using namespace std;
// allows direct use of cout instead of std::cout
#include <string>

int main() {
    std::cout << "Hello World! ";
    std::cout << "I'm a C++ program" << std::endl;

    int a, b;
    int result;

    a = 5;
    b = 2;
    a = a + 1;
    result = a + b;

    std::cout << result << std::endl;

    // constructor initialization
    int x (0);

    // uniform initialization
    int y {0};

    std::string mystring = "String"; // "\nString\n";
    std::cout << mystring << std::endl;

    return 0;
}