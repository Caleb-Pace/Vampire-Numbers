#include <iostream> // TODO: Remove, for debugging
#include <cmath>
#include <vector>
#include <array>

namespace VampireNums {

    unsigned int count_digits(unsigned long number) {
        if (number == 0)
            return 1;  // Early exit: log_10(0) is undefined
        
        return floor(log10(number)) + 1;
    }

    bool is_odd(unsigned int num) {
        return num & 1;
    }
    
    // Number should not be 0
    std::vector<char> get_digits(unsigned long number) {
        std::vector<char> digits;

        while (number > 0) {
            digits.push_back(number % 10);
            number /= 10;
        }

        return digits;
    }

    // Number should not be 0
    char* get_digits2(unsigned long number) {
        int i = count_digits(number);
        char* digits = new char[i];

        do {
            i--;
            digits[i] = number % 10;
            number /= 10;
        } while(number > 0);

        return digits;
    }

    // Number should not be 0
    std::array<unsigned char, 10> get_digit_counts(unsigned long number) {
        std::array<unsigned char, 10> counts = {0};

        while (number > 0) {
            counts[number % 10]++;
            number /= 10;
        }

        return counts;
    }

    // Cannot be negative
    // Even digits
    // Has fangs
    //   Can be factored
    //   Fangs don't both end in zero
    //   Equal length fangs
    //   Digits in fangs match digits in number
    bool is_vampire_number(unsigned long number) {
        if (is_odd(count_digits(number)))
            return false;  // Cannot have odd number of digits
        
        auto digits = get_digits(number);
        
        // TODO: Remove, for debugging
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
