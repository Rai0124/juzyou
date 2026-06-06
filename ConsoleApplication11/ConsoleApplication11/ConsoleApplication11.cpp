#include<iostream>
#include"Noob.h"

int main()
{
	int a = 0;
	int b = a;
	int c = a + b;

	Noob noob1("トロール1", 2);
	Noob noob2;
	Noob noob3;

	noob3 = noob2 = noob1;

}