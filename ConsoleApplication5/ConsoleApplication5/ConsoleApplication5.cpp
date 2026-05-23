#include<stdio.h>

int main()
{
	int array[4];
	for (int i = 0; i < 4; ++i)
	{
		printf("%p\n", &array[i]);
	}

	printf("---------------------------------------\n");

	int* p = array;
	for (int i = 0; i < 4; ++i)
	{
		printf("%p\n", p);
		p++;
	}
}