#include<iostream>
#include<functional>

char A(int v)
{
	std::cout << "v" << v << std::endl;
	return'A';
}

char B(int v)
{
	std::cout << "v" << v << std::endl;
	return'B';
}

void function(std::function<char(int)>f)
{
	char c = f(1);
	std::cout << "結果" << c << std::endl;
}

int main()
{
	function(A);
}