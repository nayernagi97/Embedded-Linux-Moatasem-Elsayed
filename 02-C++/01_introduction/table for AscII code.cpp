#include <iostream>
#include <vector>
#include <numeric>

int main()
{
    std::vector<int> Ascii_table (128);
    std::iota(Ascii_table.begin(),Ascii_table.end(),0);
    std::cout << "ASCII Code Table:" << std::endl;
    std::cout << "+------+-------+" << std::endl;
    std::cout << "| CHAR | ASCII |" << std::endl;
    std::cout << "+------+-------+" << std::endl;
    for(const auto value :Ascii_table)
    {
        std::cout << "|   " << static_cast<char>(value)  <<"   |" << "   " << value << "   |" << std::endl;
    }
    return 0;
}