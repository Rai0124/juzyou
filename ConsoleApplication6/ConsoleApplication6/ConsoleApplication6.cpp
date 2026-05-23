#include<stdio.h>

int main()
{
	int* p;
	{
		int value = 0;
		p = &value;
		*p = 10;
	}

	*p = 100;

	return 0;
}