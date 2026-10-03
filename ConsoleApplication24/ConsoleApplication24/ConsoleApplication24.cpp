#include <iostream>
#include<chrono>

int main()
{
	{
		auto start = std::chrono::system_clock::now();

		int sum1 = 0;

		//for (int i = 1; i <= 10; i++)
		//{
		//	sum1 += i;
		//}

		sum1 = (10 / 2) * (10 + 1);


		auto end = std::chrono::system_clock::now();
		auto time = end - start;
		auto d = std::chrono::duration_cast<std::chrono::nanoseconds>(time).count();
		std::cout << sum1 << ":" << d << std::endl;
	}

	{
		auto start = std::chrono::system_clock::now();

		int sum2 = 0;

		//for (int i = 1; i <= 10000; i++)
		//{
		//	sum2 += i;
		//}

		sum2 = (10000 / 2) * (10000 + 1);

		auto end = std::chrono::system_clock::now();
		auto time = end - start;
		auto d = std::chrono::duration_cast<std::chrono::nanoseconds>(time).count();
		std::cout << sum2 << ":" << d << std::endl;
	}


}
