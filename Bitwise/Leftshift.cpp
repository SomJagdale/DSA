/******************************************************************************
Author: Somanath J
Proof of Concept: friend class
Language C++
Description: This working program to shift the bits of given number to the 
              left by 3 bit position 
*******************************************************************************/

#include <iostream>

int main()
{
    int number = 10;
    
    std::cout << "Before shifting " << number << std::endl;
    
    number = number<<3;
    
    std::cout << "After shifting " << number << std::endl;

    return 0;
}
