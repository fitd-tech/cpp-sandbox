#include <iostream>

/*
    This exercise is a duplicate of exercise 2
    Write a program in C++ to print the sum of two numbers.
    Sample Output:


    Print the sum of two numbers :
    -----------------------------------
    The sum of 29 and 30 is : 59
*/
int main() {
    int a = 29;
    int b = 30;
    int total = a + b;
    std::cout << "Print the sum of two numbers:" << std::endl;
    std::cout << "-----------------------------" << std::endl;
    std::cout << "The sum of " << a << " and " << b << " is " << total << std::endl;

    return 0;
}