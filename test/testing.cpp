#include <gtest/gtest.h>

#include "../headers/ReadInput.h"


struct Testing : public ::testing::Test{};


TEST_F(Testing, test_input_num_1)
{
    std::string input[6] = {"add StringObject:Kazdy",
                            "add DoubleObject:1",
                            "add StringObject: test, ktory przechodzi, to",
                            "add DoubleObject:1",
                            "add StringObject: punkt za zadanie!",
                            "sum"};


    std::string output = "DoubleObject(2.000000)\n"
                         "StringObject(\"Kazdy test, ktory przechodzi, to punkt za zadanie!\")\n";

    ReadInput read;

    for(int i = 0; i < 5; i++)
        read.readLine(input[i]);

    ASSERT_EQ(read.readLine(input[5]), output);


}


TEST_F(Testing, test_input_num_2)
{
    std::string input[7] = {"add StringObject:Liczba",
                         "add IntObject:5",
                         "add StringObject: odjac PI",
                         "add DoubleObject:3.1415926",
                         "add StringObject: to ec:",
                         "add DoubleObject:1.8584074",
                         "sum"};


    std::string output = "DoubleObject(5.000000)\n"
                         "IntObject(5)\n"
                         "StringObject(\"Liczba odjac PI to ec:\")\n";

    ReadInput read;

    for(int i = 0; i < 6; i++)
        read.readLine(input[i]);

    ASSERT_EQ(read.readLine(input[6]), output);


}


TEST_F(Testing, test_input_num_3)
{
    std::string input[10] = {"add ComplexObject:1+4i",
                             "get 0",
                             "add ComplexObject:4-2i",
                             "get 1",
                             "add ComplexObject:44",
                             "get 2",
                             "add ComplexObject:22i",
                             "get 3",
                             "add ComplexObject:i",
                             "get 4"};


    std::string output[5] = {"ComplexObject(1+4i)",
                             "ComplexObject(4-2i)",
                             "ComplexObject(44)",
                             "ComplexObject(0+22i)",
                             "ComplexObject(0+1i)"};


    ReadInput read;

    for(int i = 0 ; i < 10; i+=2)
        read.readLine(input[i]);


    for(int i = 1, j = 0; j < 5 && i < 10; i+=2, ++j)
    {
        EXPECT_EQ(read.readLine(input[i]), output[j]) << i << " " << j;
    }

}

TEST_F(Testing, test_input_num_4)
{
    std::string input[6] = {"add IntObject:3",
                            "add DoubleObject:5",
                            "add StringObject:Grazyna i Janusz",
                            "add ComplexObject:4+2i",
                            "mul 2",
                            "sum"};

    std::string output = "ComplexObject(8+4i)\n"
                         "DoubleObject(10.000000)\n"
                         "IntObject(6)\n"
                         "StringObject(\"Grazyna i JanuszGrazyna i Janusz\")\n";

    ReadInput read;

    for(int i = 0; i < 5; i++)
        read.readLine(input[i]);

    ASSERT_EQ(read.readLine(input[5]), output);


}


TEST_F(Testing, test_input_num_5)
{
    std::string input = "sum";


    std::string output = "";

    ReadInput read;


    ASSERT_EQ(read.readLine(input), output);


}
