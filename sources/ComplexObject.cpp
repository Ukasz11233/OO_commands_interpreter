#include "../headers/ComplexObject.h"

void ComplexObject::show(std::ostream & os) const
{
    if(_val.real() == 0)
    {
        if(_val.imag() == 1)
            os << "ComplexObject(i)";
        else
            os << "ComplexObject(" << _val.imag() << "i)";
    }
    else if(_val.imag() == 0)
        os << "ComplexObject(" << _val.real() << ")";
    else
    {
        if(_val.imag() > 0)
        {
            if(_val.imag() == 1)
                os << "ComplexObject(i)";
            else
                os << "ComplexObject(" << _val.imag() << "i)";
        }
        else
        {
            if(_val.imag() == -1)
                os << "ComplexObject(-i)";
            else
                os << "ComplexObject(" << _val.imag() << "i)";
        }

    }

}

std::string ComplexObject::test_str() const
{
    std::string output;
    if(_val.real() == 0)
    {

        if(_val.imag() == 1)
            output = "ComplexObject(0+1i)";
        else
            output = "ComplexObject(0+" + std::to_string(_val.imag()) + "i)";
    }
    else if(_val.imag() == 0)
    {
        output = "ComplexObject(" +  std::to_string(_val.real()) + ")";
    }
    else
    {
        if(_val.imag() > 0)
        {

            if(_val.imag() == 1)
                output =  "ComplexObject(" + std::to_string(_val.real()) +"1i)";
            else
                output = "ComplexObject(" + std::to_string(_val.real()) + "+" +  std::to_string(_val.imag()) + "i)";
        }
        else
        {
            if(_val.imag() == -1)
                output = "ComplexObject(" + std::to_string(_val.real()) + "-i)";
            else
                output = "ComplexObject(" + std::to_string(_val.real()) +  std::to_string(_val.imag()) + "i)";
        }

    }
    return output;
}

ComplexObject ComplexObject::operator+(std::complex<int>  cplx)
{
    _val += cplx;
    return  *this;
}

void ComplexObject::operator*(const int x)
{
    _val *= x;
}