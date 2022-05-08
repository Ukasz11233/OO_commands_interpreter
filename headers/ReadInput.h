#ifndef READINPUT_H
#define READINPUT_H

#include <vector>
#include "Object.h"
#include "StringObject.h"
#include "DoubleObject.h"
#include "IntObject.h"
#include "ComplexObject.h"

class ReadInput
{
public:
    ReadInput(): object_type(""), command_type(""), data("") {}

    std::string readLine(const std::string &input);
    std::string get_object_type() const {return object_type;}
    std::string get_command_type() const {return command_type;}
    std::string get_data() const {return data;}

    std::string sum_all() const;
    void show_vector();


private:
    void create_StringObject(std::string & text);
    void create_DoubleObject(const double val);
    void create_IntObject(const int val);
    void create_ComplexObject(std::string);

    std::vector<std::unique_ptr<Object>> my_vec;
    std::string object_type, command_type, data;
};

#endif //// READINPUT_H