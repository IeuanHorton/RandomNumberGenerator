#include <iostream> // For input/output operations (e.g., cout)
#include "randomGen.h"

int main(int argc, char *argv[])
{
    int givenNumber = -1;
    int responseNumber = -1;
    std::cout << "Hello! Plesae choose a number to randomize to:" ;
    std::cin >> givenNumber;
    RandomGen rg; rg.randomIntMaker(givenNumber,responseNumber);
    std::cout << "The random number I have chosen: " << responseNumber << std::endl;
    return 0;
}

