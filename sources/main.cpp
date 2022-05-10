#include <iostream>
#include "../headers/ReadInput.h"



int main() {
    std::string input, data;

    ReadInput read;

    while(std::getline(std::cin, input) && !std::cin.eof())
    {
        try {
            input = read.readLine(input);
            if(input == "")
                continue;
            std::cout << input << '\n';
        }
        catch (const Exception & ex)
        {
            std::cout << ex.data << "\n";

        }
        catch(...)
        {
            std::cout << "Catched unknown exception type!";
        }
    }

     return 0;
}
