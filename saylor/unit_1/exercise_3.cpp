#include <iostream>

/*
    Write a program in C++ to find Size of fundamental data types.

    Sample Output:

    Find Size of fundamental data types :
    ------------------------------------------
    The sizeof(char) is : 1 bytes
    The sizeof(short) is : 2 bytes
    The sizeof(int) is : 4 bytes
    The sizeof(long) is : 8 bytes
    The sizeof(long long) is : 8 bytes
    The sizeof(float) is : 4 bytes
    The sizeof(double) is : 8 bytes
    The sizeof(long double) is : 16 bytes
    The sizeof(bool) is : 1 bytes
*/

int main() {
    char char_type;
    short short_type;
    int int_type;
    long long_type;
    long long long_long_type;
    float float_type;
    double double_type;
    long double long_double_type;
    bool bool_type;

    std::cout << "Find size of fundamental data types:" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "The size of char is        " << sizeof char_type << " bytes" << std::endl;
    std::cout << "The size of short is       " << sizeof short_type << " bytes" << std::endl;
    std::cout << "The size of int is         " << sizeof int_type << " bytes" << std::endl;
    std::cout << "The size of long is        " << sizeof long_type << " bytes" << std::endl;
    std::cout << "The size of long long is   " << sizeof long_long_type << " bytes" << std::endl;
    std::cout << "The size of float is       " << sizeof float_type << " bytes" << std::endl;
    std::cout << "The size of double is      " << sizeof double_type << " bytes" << std::endl;
    std::cout << "The size of long double is " << sizeof long_double_type << " bytes" << std::endl;
    std::cout << "The size of bool is        " << sizeof bool_type << " bytes" << std::endl;
    std::cout << "It looks like long double is different than they expected!" << std::endl;
    return 0;
}