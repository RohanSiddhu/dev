#include <iostream>
#include <cstring>

const size_t SIZE = 512;

uint32_t naiveMatch(const char* const string, const char* const pattern);

int main(int argc, const char* argv[]) {
    char string[SIZE + 1];
    char pattern[SIZE + 1];

    std::cout << "Enter Text: ";
    std::cin.getline(string, SIZE);

    std::cout << "Enter Pattern: ";
    std::cin.getline(pattern, SIZE);

    std::cout << "Pattern appears " << naiveMatch(string, pattern) << " times.\n";

    return EXIT_SUCCESS;
}

bool patternCmp(const char* const string, const char* const pattern, int offset, int length) {
    for (int i = 0; i < length; i++) {
        if (string[i + offset] != pattern[i]) return false;
    }

    return true;
}

uint32_t naiveMatch(const char* const string, const char* const pattern) {
    size_t n = strlen(string);
    size_t m = strlen(pattern);

    uint32_t count = 0;

    for (int s = 0; s <= (n - m); s++) {
        if (patternCmp(string, pattern, s, m)) count++;
    }

    return count;
}
