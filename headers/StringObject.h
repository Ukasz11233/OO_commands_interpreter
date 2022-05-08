#ifndef StringObject_H_
#define StringObject_H_
#include "Object.h"

class StringObject : public Object{
public:
    StringObject() : text("") {}
    StringObject(std::string t) : text(t) {}
    virtual ~StringObject() {}

    virtual std::string get_text() const override { return text;}
    StringObject operator+(std::string);
    virtual void show(std::ostream &) const override;
    virtual std::string test_str() const;

    virtual void operator*(const int n) override;

private:
    std::string text;
};

#endif