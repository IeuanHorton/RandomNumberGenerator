#include "randomGen.h"

#include <cstdlib>  // For rand() and srand()
#include <ctime>    // Allows time() to exist

void RandomGen::randomIntMaker(int givenNumber, int& responseNumber)
{
    srand(static_cast<unsigned int>(time(0)));
    responseNumber = (rand() % givenNumber) + 1;
}
