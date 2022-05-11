#ifndef OBJECT_H
#define OBJECT_H
#include <iostream>
#include <iomanip>
#include <complex>


struct Exception{
    explicit Exception(std::string warning) : data(warning) {}
    std::string data;
};


class Object
{
public:
    Object() {};
    virtual ~Object() {};
    virtual std::string get_text() const  {return "";};
    virtual double get_dbl() const {return 0;};
    virtual int get_int() const {return 0;};
    virtual std::complex<int> get_cplx() const {return 0;};
    virtual void show(std::ostream &) const = 0;
    virtual std::string test_str() const {return "";};

    virtual void operator*(const int) = 0;

};

#endif //// OBJECT_H