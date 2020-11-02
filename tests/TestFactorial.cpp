//
// Created by kevin on 11/2/20.
//


#include <string>
#include "Operations.h"


int main(int argc, char** argv)
{
    auto number = std::stoull(argv[1]);
    auto correctFactorial = std::stoull(argv[2]);

    auto resultFactorial = Operations::factorial(number);

    if (correctFactorial == resultFactorial) {
        return 0;
    } else {
        return 1;
    }
}