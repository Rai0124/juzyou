#include<iostream>
#include<string>

template<class T>
class Data
{
public:
	Data() {}
	virtual ~Data() {}
public:
	void disp() const;
	const T& getData() const;
	void set(const T& value);
private:
	T value_ = {};
};

template<class T>
void Data<T>::disp() const
{
	std::cout << value_ << std::endl;
}

template<class T>
void Data<T>::set(const T& value)
{
	value_ = value;
}