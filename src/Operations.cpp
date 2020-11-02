#include "Operations.h"

namespace Operations
{
    unsigned long long factorial(unsigned int number)
    {
        if (number == 0) {
            return 1;
        }
        return number * factorial(number - 1);
    }

    int testFunction()
    {

    }
}
