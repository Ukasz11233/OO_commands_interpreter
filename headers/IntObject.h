#ifndef INTOBJECT_H
#define INTOBJECT_H
#include "Object.h"


class IntObject : public Object
{
public:
    IntObject() : _val(0) {}
    IntObject(int a): _val(a) {}
    virtual ~IntObject() {}
    int get_int() const override { return _val;}

    IntObject operator+(const int);
    virtual void show(std::ostream &) const override;
    virtual std::string test_str() const;

    virtual void operator*(const int n) override;

private:
    int _val;
};


#endif  //// INTOBJECT_H