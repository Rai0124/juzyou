#include<iostream>
#include<vector>
#include<algorithm>

bool leftGreater(int l, int r)
{
	return l > r;
}

int main()
{
	std::vector<float>vec = { 10,8,4,9,2,3,5 };

	std::sort(vec.begin(), vec.end(),leftGreater);


	for (std::vector<float>::iterator it = vec.begin();
		it != vec.end();
		it++)
	{
		std::cout << *it << "  ";
		}

    
}