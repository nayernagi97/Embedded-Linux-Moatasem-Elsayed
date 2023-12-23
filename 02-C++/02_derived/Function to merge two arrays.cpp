#include <algorithm>
#include <iostream>
#include <array>
#include <vector>

std::vector<int> merge_two_arrays(std::array<int,5> number_array1, std::array<int,5> number_array2)
{   
    std::vector<int> merged_array;
    std::merge(number_array1.begin(),number_array1.end(),number_array2.begin(),number_array2.end(), std::back_inserter(merged_array));
    return merged_array;
}
int main()
{
    std::array<int,5> number_array1{0,1,2,3,4};
    std::array<int,5> number_array2{5,6,7,8,9};
    std::vector<int> merged_array{merge_two_arrays(number_array1, number_array2)};
    std::for_each(merged_array.begin(),merged_array.end(),[](int n){std::cout << n;});
    return 0;
}
