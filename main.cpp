#include <iostream>
#include "vampire_nums/vampire.hpp"

int main() {
    unsigned long vampire = 1260;
    bool is_vampire_number = VampireNums::is_vampire_number(vampire);

    std::cout << vampire << " is";
    std::cout << (is_vampire_number ? "" : " not");
    std::cout << " a vampire number" << std::endl;

    return 0;
}
