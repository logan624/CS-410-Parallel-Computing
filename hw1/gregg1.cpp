// Name: Logan Gregg
// Class: CS410 -- Parallel Computing
// Assignment: Homework 1
// Due Date: 8/25/2023
// Description: Simple C++ Program that gives some descriptive information about a list
//              of numbers

#include <iostream>
#include <string>
#include <sstream>

int Over(int);
int Nine(int);
int Even(int);
int Three(int);

int main ()
{
    int num;
    int over = 0;
    int nine = 0;
    int even = 0;
    int three = 0;
    std::string input;
    
    std::cout << "Enter a line of numbers: ";
    std::getline(std::cin, input);

    std::stringstream ss(input);

    while(ss >> num)
    {
        if (Over(num) == 1)
        {
            over += 1;
        }
        
        if (Nine(num) == 1)
        {
            nine += 1;
        }
        
        if (Even(num) == 1)
        {
            even += 1;
        }

        if (Three(num) == 1)
        {
            three += 1;
        }
    }

    std::cout << "Over: " << over << std::endl;
    std::cout << "Nine: " << nine << std::endl;
    std::cout << "Even: " << even << std::endl;
    std::cout << "Three: " << three << std::endl;
}

int Over(int integer)
{
    if (integer > 20)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int Nine(int integer)
{
    if (integer % 9 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Even(int integer)
{
    if (integer % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int Three(int integer)
{
    int return_value = 0;

    while(integer != 0)
    {
        int remainder = integer % 10;
        integer = integer / 10;
        if (remainder == 3)
        {
            return_value = 1;        
        }
    }

    return return_value;
}
