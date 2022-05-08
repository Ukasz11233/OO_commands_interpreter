#include "../headers/StringObject.h"


void StringObject::show(std::ostream & os) const
{
    os << "StringObject(\"" << text << "\")\n";
}

StringObject  StringObject::operator+(std::string _text)
{
    text += _text;
    return *this;
}

std::string StringObject::test_str() const
{
    return "StringObject(\"" + text + "\")";
}

void StringObject::operator*(const int n)
{
    std::string tmp = text;
    for(int i = 1; i < n; ++i)
        text += tmp;

}