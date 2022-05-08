#include "../headers/IntObject.h"

IntObject IntObject::operator+(const int val)
{
    _val += val;
    return *this;
}

void IntObject::show(std::ostream & os) const
{
    os << "IntObject(" << _val << ")\n";
}

std::string IntObject::test_str() const
{
    return "IntObject(" + std::to_string(_val) + ")";
}

void IntObject::operator*(const int n)
{
    _val *= n;
}