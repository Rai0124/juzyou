#include<iostream>
#include"Animal.h"

int main()
{
	int a = 0;
	int b = a;
	int c = a + b;

	Animal animal1("動物1", 2);
	Animal animal2;
	Animal animal3;

	animal3 = animal2 = animal1;
}
