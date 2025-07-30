#include <iostream> // For input/output operations (e.g., cout)
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // Allows time() to exist

int main(int argc, char *argv[])
{
    int givenNumber = -1;
    int responseNumber = -1;
    std::cout << "Hello! Plesae choose a number to randomize to:" ;
    std::cin >> givenNumber;
    srand(static_cast<unsigned int>(time(0)));
    responseNumber = (rand() % givenNumber) + 1;
    std::cout << "The random number I have chosen: " << responseNumber << std::endl;
    return 0;
}