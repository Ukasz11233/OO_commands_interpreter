#include "../headers/ReadInput.h"



std::string ReadInput::readLine(const std::string& input)
{
    std::stringstream ss(input);
    std::getline(ss, command_type, ' ');
    std::getline(ss, object_type, ':');
    std::getline(ss, data, '~');
    if(command_type == "add")
    {
        if(object_type == "StringObject")
            create_StringObject(data);
        else if(object_type == "DoubleObject")
            create_DoubleObject(std::stod(data));
        else if(object_type == "IntObject")
            create_IntObject(std::stoi(data));
        else if(object_type == "ComplexObject")
        {
            create_ComplexObject(data);
        }
        else
        {
            throw Exception("Invalid object type!");
        }

    }
    else if(command_type == "get")
    {
        int idx = std::stoi(object_type);
        if(idx < my_vec.size())
            return my_vec[idx] -> test_str();
        else
            throw Exception("Invalid index - number_out_of_range!");

    }
    else if(command_type == "sum")
    {
        return sum_all();
    }
    else if(command_type == "mul")
    {
        int n = std::stoi(object_type);
        for(unsigned int i = 0; i < my_vec.size(); ++i)
            (*my_vec[i])*n;

    }
    else
    {
        throw Exception("Invalid command!");
    }

    return "";
}



void ReadInput::create_StringObject(std::string & text)
{
    std::unique_ptr<Object> str_obj = std::make_unique<StringObject>(text);
    my_vec.push_back(std::move(str_obj));
}

void ReadInput::create_DoubleObject(const double val)
{
    std::unique_ptr<Object> dbl_obj = std::make_unique<DoubleObject>(val);
    my_vec.push_back(std::move(dbl_obj));
}

void ReadInput::create_IntObject(const int val)
{
    std::unique_ptr<Object> int_obj = std::make_unique<IntObject>(val);
    my_vec.push_back(std::move(int_obj));
}

void ReadInput::create_ComplexObject(std::string input)
{
    std::stringstream ss(input);
    int plusPos, minusPos, i_pos, real_int = 0, imag_int = 0;
    bool real;
    char operand;
    plusPos = input.find('+');
    minusPos = input.find('-');
    i_pos = input.find('i');

    real = i_pos < 0;

    if(real)
    {
        ss >> real_int;
    }
    else if(!real && (minusPos <= 0 && plusPos <= 0) )
    {

        if(i_pos == 0)
            imag_int = 1;
        else if(minusPos == 0)
        {
            ss >> operand >> imag_int;
            imag_int *= -1;
        }
        else
            ss >> imag_int;
    }
    else
    {

        ss >> real_int >> operand >> imag_int;
        if(operand == '-')
            imag_int *= -1;
    }

    std::unique_ptr<Object> cpl_obj = std::make_unique<ComplexObject>(real_int, imag_int);
    my_vec.push_back(std::move(cpl_obj));
}

void ReadInput::show_vector()
{
    for(unsigned int i = 0; i < my_vec.size(); i++)
    {
        if(typeid(*my_vec[i]) == typeid(StringObject))
            std::cout << my_vec[i] -> get_text() << "\n";
        else if(typeid(*my_vec[i]) == typeid(DoubleObject))
            std::cout << my_vec[i] -> get_dbl() << "\n";
        else if(typeid(*my_vec[i]) == typeid(IntObject))
            std::cout << my_vec[i] -> get_int() << "\n";
        else if(typeid(*my_vec[i]) == typeid(ComplexObject))
        {
            my_vec[i] -> show(std::cout);
            putchar('\n');
        }
    }
}



std::string ReadInput::sum_all() const
{
    bool str_exist = false, int_exist = false, dbl_exist = false, cpx_exist = false;

    std::string output;
    StringObject tmpStrObj;
    IntObject tmpIntObj;
    DoubleObject tmpDblObj;
    ComplexObject tmpCpxObj;


    for(unsigned int i = 0; i < my_vec.size(); i++)
    {
        if(typeid(*my_vec[i]) == typeid(StringObject))
        {
            tmpStrObj + (my_vec[i] -> get_text());
            str_exist = true;
        }
        else if(typeid(*my_vec[i]) == typeid(DoubleObject))
        {
            tmpDblObj + (my_vec[i] -> get_dbl());
            dbl_exist = true;
        }
        else if(typeid(*my_vec[i]) == typeid(IntObject))
        {
            tmpIntObj + (my_vec[i] -> get_int());
            int_exist = true;
        }
        else if(typeid(*my_vec[i]) == typeid(ComplexObject))
        {
            tmpCpxObj + (my_vec[i] -> get_cplx());
            cpx_exist = true;
        }

    }

    if(cpx_exist)
        output += tmpCpxObj.test_str() + '\n';
    if(dbl_exist)
        output += tmpDblObj.test_str() + '\n';
    if(int_exist)
        output += tmpIntObj.test_str() + '\n';
    if(str_exist)
        output += tmpStrObj.test_str() + '\n';

    return output;

}