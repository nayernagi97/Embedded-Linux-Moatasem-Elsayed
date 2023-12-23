#include <iostream>

int main()
{
    
    auto lamda = [](int n) {return n*n;};
    int number{8};
    int number_squared(lamda(number));
    std::cout << "the number was: " << number << std::endl << "and the squared was: " << number_squared;
    return 0;
}
