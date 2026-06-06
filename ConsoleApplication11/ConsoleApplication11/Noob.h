#pragma once
#include <string>

class Noob final
{
public:
	Noob() = default;
	Noob(const std::string& name, int footNum) : name_(name), footNum_(footNum) {}
	Noob& operator=(const Noob& noob);
public:
	std::string		name_ = {};
	int				footNum_ = 0;
};

Noob& Noob::operator=(const Noob& src)
{
	name_ = src.name_;
	footNum_ = src.footNum_;

	return *this;
}
