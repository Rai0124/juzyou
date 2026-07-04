#include<iostream>
#include"template.h"

template<class T>
void disp(T value)
{
	std::cout << value << std::endl;
}

template void disp<int>(int value);
