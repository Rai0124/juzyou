#pragma once


class Animal final
{
public:
    Animal& operator=(const Animal& animal);
public:
    std::string     name_ = {};
    int             footNum_ = 0;

};

Animal& Animal::operator=(const Animal& src)
{
    name_ = src.name_;
    footNum_ = src.footNum_;

    return *this;
}