#include <iostream>
#include "vampire_nums/vampire.hpp"

int main() {
    long vampire = 1260;

    std::cout << vampire << " is";
    std::cout << (VampireNums::is_vampire_number(vampire) ? "" : " not");
    std::cout << " a vampire number" << std::endl;

    return 0;
}
