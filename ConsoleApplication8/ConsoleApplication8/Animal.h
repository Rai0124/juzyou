#pragma once
#include<string>

class Animal
{
public:
    Animal();

    Animal(const char* name, int footNum);

public:
    std::string  name_ = {};
    int          footNum_ = 0;
};