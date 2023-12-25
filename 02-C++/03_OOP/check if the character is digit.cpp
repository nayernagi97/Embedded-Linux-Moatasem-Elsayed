#include <iostream>
#include <cctype>
#include <ostream>

int main()
{
    char character;
    std::cout << "please enter the character for test" << std::endl;
    std::cin >> character;
    if (std::isdigit(character)){std::cout << " the character was a digit";}
    else{std::cout <<"it was not a digit";}
    return 0;
}
