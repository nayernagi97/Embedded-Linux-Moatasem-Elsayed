#include <iostream>
#include <array>
#include <algorithm>
int main()
{
    std::array<int,10> unsorted_array{8,10,6,7,2,9,3,5,7,2,};
    // std::for_each(unsorted_array.begin(),unsorted_array.end(),[](int n){std::cout << n;});
    std::cout << "the array in ascending order: ";
    std::sort(unsorted_array.begin(),unsorted_array.end(),[](int x, int y){return x<y;});
    std::for_each(unsorted_array.begin(),unsorted_array.end(),[](int n){std::cout << n << " ";});
    std::cout << std::endl << "the array in descending order: ";
    std::sort(unsorted_array.begin(),unsorted_array.end(),[](int x, int y){return x>y;});
    std::for_each(unsorted_array.begin(),unsorted_array.end(),[](int n){std::cout << n << " ";});
    return 0;
}
