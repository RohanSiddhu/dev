#include <iostream>

bool hcf(uint64_t num1) {
    uint64_t limit = num1;

    if (num1 <= 1)
    {
        return false;
    }
    else
    {
        uint64_t mod;
        for (uint64_t i = 2; i <= num1; i++)
        {
            mod = num1 % i;

            if (i >= limit)
            {
                return true;
            }
            else if (mod == 0)
            {
                return false;
            }
            
            limit = num1 / i;
        }
    }
    
    return false;
}

int main() {
    
    if(hcf(2)) {
        std::cout << "Prime\n";
    }
    else {
        std::cout << "Not Prime\n";
    }

	return 0;
}
