#include <iostream> // TODO: Remove, for debugging
#include <cmath>
#include <vector>
#include <array>

namespace vampire_nums {

    unsigned int CountDigits(unsigned long number) {
        if (number == 0)
            return 1;  // Early exit: log_10(0) is undefined
        
        return floor(log10(number)) + 1;
    }

    bool IsOdd(unsigned int num) {
        return num & 1;
    }
    
    std::vector<char> GetDigits(unsigned long number) {
        std::vector<char> digits;

        while (number > 0) {
            digits.push_back(number % 10);
            number /= 10;
        }

        return digits;
    }

    char* GetDigits2(unsigned long number) {
        int i = CountDigits(number);
        char* digits = new char[i];

        do {
            i--;
            digits[i] = number % 10;
            number /= 10;
        } while(number > 0);

        return digits;
    }

    std::array<unsigned char, 10> GetDigitCounts(unsigned long number) {
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
    bool IsVampireNumber(unsigned long number) {
        if (IsOdd(CountDigits(number)))
            return false;  // Cannot have odd number of digits
        
        auto digits = GetDigits(number);
        
        // TODO: Remove, for debugging
        for (int d : digits)
            std::cout << ' ' << d;
        std::cout << std::endl;

        char* digits2 = GetDigits2(number);

        // TODO: Remove, for debugging
        int digit_count = CountDigits(number);
        for (int i = 0; i < digit_count; i++)
            std::cout << ' ' << static_cast<int>(digits2[i]);
        std::cout << std::endl;

        delete[] digits2;

        return true;
    }
    
}
