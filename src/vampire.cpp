#include <cmath>
#include <vector>

namespace VampireNums {

    int count_digits(long number) {
        return log10(number) + 1;
    }

    bool is_odd(int num) {
        return num & 1;
    }

    // // TODO: Implement
    // std::vector<char> get_digits(long number) {
    // }

    // Cannot be negative
    // Even digits
    // Has fangs
    //   Can be factored
    //   Fangs don't both end in zero
    //   Equal length fangs
    //   Digits in fangs match digits in number
    bool is_vampire_number(long number) {
        if (number < 0)
            return false;  // Cannot be negative
        if (is_odd(count_digits(number)))
            return false;  // Cannot have odd number of digits
        
        return true;
    }
    
}
