#include <algorithm>
#include <array>
#include <iostream>
#include <ostream>

int main()
{
    std::array<int, 5> array{2,4,6,8,10};
    bool is_even = std::all_of(array.begin(),array.end(),[](int number)->bool{return number%2==0;});
    if(is_even){std::cout<<"all array is even";}
    else{std::cout << "not all aray is even";}
    return 0;
}
