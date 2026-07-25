#include<iostream>
#include<map>

std::string name = "buriburi";
int         age = 41;

struct Personal
{
    std::string name_{};
    int         age_{};
};

Personal  getNameAndAge()
{
    Personal data;
    data.name_= name;
    data.age_ = age;
    return data;
}

void getNameAndAge(std::string& n, int& a)
{
    n = name;
    a = age;
}

std::pair<std::string, int> getNameAndAge()
{
    return{name,age}
}

int main()
{
    auto [n, a] = getNameAndAge();
    std::cout << n << std::endl;
    std::cout << a << std::endl;
}