#include<iostream>
#include<vector>
#include<algorithm>


int main()
{
	std::vector<float>vec = { 1,2,3,4,5,6,7,8,9,10 };

	std::sort(vec.begin(), vec.end());


	for (std::vector<float>::iterator it = vec.begin();
		it != vec.end();
		it++)
	{
		std::cout << *it << "  ";
	}


}