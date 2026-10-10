#include<iostream>
#include<thread>

void temp1()
{
	for (int i = 0; i < 100; i++)
	{
		std::cout << "Thread 1: " << i << std::endl;
	}
}

void temp2()
{
	for (int i = 0; i < 100; i++)
	{
		std::cout << "Thread 2: " << i << std::endl;
	}
}

int main()
{
	std::thread th1(temp1);
	std::thread th2(temp2);

	th1.join();
	th2.join();
	return 0;
}