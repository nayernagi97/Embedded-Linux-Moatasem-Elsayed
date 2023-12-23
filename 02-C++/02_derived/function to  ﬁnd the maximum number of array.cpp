#include <algorithm>
#include <iostream>
#include <array>

int max_number_array(std::array<int,5> number_array)
{
    return *std::max_element(number_array.begin(),number_array.end());
}
int main()
{
    std::array<int,5> number_array{0,1,2,3,4};
    std::cout << "maximum number in array is: " << max_number_array(number_array); 
    return 0;
}
