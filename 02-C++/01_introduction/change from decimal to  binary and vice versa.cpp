#include <iostream>
#include <bitset>


int main()
{
    
    unsigned long long number_int=0 ;
    std::cout << "Enter a Decimal Number: " ;
    std::cin >> number_int;
    std::bitset<8> number{number_int};
    std::cout << "Binary Representation: " << number<< std::endl;
    std::cout << "Enter a Binary Number: " ;
    std::cin >> number;
    std::cout << "Decimal Representation: " << number.to_ulong()<< std::endl;
    return 0;
}