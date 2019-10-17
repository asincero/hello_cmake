/**
 * @file person.cpp
 * Defines the person namespace.
 * 
 * @author Arcadio A. Sincero Jr., <arcadiosincero@gmail.com>
 * @date 10/16/2019
 * 
 * Copyright (c) 2019 Arcadio A. Sincero Jr.
 */

#include "person.h"

#include <iostream>

utils::person::Person::Person(const std::string& name)
    : _name(name)
{
}

void
utils::person::Person::say_hello() const
{
    std::cout << "Hello, my name is " << _name << "." << std::endl;
}
