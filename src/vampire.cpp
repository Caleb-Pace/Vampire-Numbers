#include <iostream> // TODO: Remove, for debugging
#include <cmath>
#include <vector>

namespace VampireNums {

    int count_digits(long number) {
        return log10(number) + 1;
    }

    bool is_odd(int num) {
        return num & 1;
    }

    std::vector<char> get_digits(long number) {
        std::vector<char> digits;

        while (number > 0) {
            digits.push_back(number % 10);
            number /= 10;
        }

        return digits;
    }

    char* get_digits2(long number) {
        int i = count_digits(number);
        char* digits = new char[i];

        do {
            i--;
            digits[i] = number % 10;
            number /= 10;
        } while(number > 0);

        return digits;
    }

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
        
        auto digits = get_digits(number);
        
        // TODO: Remove, for debugging
        std::cout << std::endl;
        for (int d : digits)
            std::cout << ' ' << d;
        std::cout << std::endl;

        char* digits2 = get_digits2(number);

        // TODO: Remove, for debugging
        int digit_count = count_digits(number);
        for (int i = 0; i < digit_count; i++)
            std::cout << ' ' << static_cast<int>(digits2[i]);
        std::cout << std::endl;

        delete[] digits2;

        return true;
    }
    
}
