#ifndef DoubleObject_H_
#define DoubleObject_H_
#include "Object.h"

class DoubleObject : public Object{
public:
    DoubleObject() : val(0) {}
    DoubleObject(double d) : val(d) {}
    virtual ~DoubleObject() {}

    DoubleObject operator+(const double);
    virtual void show(std::ostream &) const override;
    virtual std::string test_str() const;
    virtual double get_dbl() const override {return val;}

    virtual void operator*(const int n) override;
private:
    double val;
};

#endif