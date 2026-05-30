#include<string>
#include <iostream>
#include"Animal.h"

Animal::Animal()
{
    std::cout << "コンストラクタが呼び出されました" << std::endl;
    name_ = "動物";
    footNum_ = 4;
}

Animal::Animal(const char* name, int footNum)
{
    std::cout << "引数付きコンストラクタが呼び出されました" << std::endl;

    name_ = name;
    footNum_ = footNum;
}
