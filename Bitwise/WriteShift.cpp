/******************************************************************************
Author: Somanath J
Proof of Concept: friend class
Language C++
Description: This working program to shift the bits of given number to the 
              right by 4 bit position 
*******************************************************************************/

#include <iostream>

int main()
{
    int number = 1000;
    
    std::cout << "Before shifting " << number << std::endl;
    
    number = number>>4;
    
    std::cout << "After shifting " << number << std::endl;

    return 0;
}
