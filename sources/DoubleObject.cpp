#include "../headers/DoubleObject.h"

void DoubleObject::show(std::ostream & os) const{
    os << "DoubleObject(" << val << ")\n";
}


DoubleObject DoubleObject::operator+(const double x)
{
    val += x;
    return *this;
}


std::string DoubleObject::test_str() const
{

    return "DoubleObject(" + std::to_string(val) + ")";
}

void DoubleObject::operator*(const int n)
{
    val *= n;
}