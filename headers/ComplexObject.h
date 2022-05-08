#ifndef COMPLEXOBJECT_H
#define COMPLEXOBJECT_H
#include "Object.h"

class ComplexObject : public Object
{
public:
    ComplexObject() : _val(0, 0) {}
    ComplexObject(int x, int im) : _val(x, im) {}
    virtual ~ComplexObject() {}


    ComplexObject operator+(std::complex<int> );
    virtual void show(std::ostream &) const;
    virtual std::string test_str() const;
    virtual std::complex<int> get_cplx() const {return _val;}

    virtual void operator*(const int n) override;

private:
    std::complex<int> _val;
};

#endif