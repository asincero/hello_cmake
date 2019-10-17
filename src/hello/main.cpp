/**
 * @file main.cpp
 * Implements the main() function.
 *
 * @author Arcadio A. Sincero Jr., <arcadiosincero@gmail.com>
 * @date 10/16/2019
 *
 * Copyright (c) 2019 Arcadio A. Sincero Jr.
 */

#include <iostream>
#include <string>

#include "utils/person.h"

int
main()
{
    std::cout << "Hello, what is your name? ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << "." << std::endl;
    return 0;
}