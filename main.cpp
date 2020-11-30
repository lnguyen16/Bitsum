#include <iostream>
#include "bitsum.h"

using namespace std;

int main() {

    unsigned long input;

    std::cin >> input;
        
    std::cout << " ~0ul: " << numberOfOnes(~0ul)  << std::endl;
    std::cout << "Input: " << numberOfOnes(input) << std::endl;
}
