#include <algorithm>
#include <iostream>
#include <array>

int search_number_array(std::array<int,5> number_array, int number)
{   
    if (std::find(number_array.begin(),number_array.end(),number) != number_array.end())
    {
        return *std::find(number_array.begin(),number_array.end(),number);
    }
    else
    {
        return -1;
    }
}
int main()
{
    
    std::array<int,5> number_array{0,1,2,3,4};
    int number_to_search{3};
    int number_position{search_number_array(number_array,number_to_search)};
    if (number_position != -1){std::cout << "maximum number in array is: " << number_position;}
    else {std::cout <<"the number " << number_to_search << " cannot not found in array";}
    return 0;
}
