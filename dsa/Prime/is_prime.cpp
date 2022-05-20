#include "is_prime.h"

bool is_prime(uint64_t num) {
    uint64_t limit = num;

    if (num <= 1)
    {
        return false;
    }
    else
    {
        uint64_t mod;
        for (uint64_t i = 2; i <= num; i++)
        {
            mod = num % i;

            if (i >= limit)
            {
                return true;
            }
            else if (mod == 0)
            {
                return false;
            }
            
            limit = num / i;
        }
    }
    
    return false;
}
