#include <iostream>
#include "debug.hpp"

void console_log(std::string label, std::string value) {
    std::cout << label << ": " << value << std::endl;
}
