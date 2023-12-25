#include <algorithm>
#include <array>
#include <iostream>
#include <ostream>

int main()
{
    std::array<int, 5> array{1,3,5,7,9};
    bool is_even = std::any_of(array.begin(),array.end(),[](int number)->bool{return number%2==0;});
    if(is_even){std::cout<<"there is an even value in the array";}
    else{std::cout << "the array have no even values :\(";}
    return 0;
}
