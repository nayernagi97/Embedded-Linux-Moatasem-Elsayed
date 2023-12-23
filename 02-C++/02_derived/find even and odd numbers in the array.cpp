#include <algorithm>
#include <iostream>
#include <array>
#include <vector>

int main()
{
    std::array<int,5> number_array{0,1,2,3,4};
    std::vector<int> even_number{};
    std::vector<int> odd_number{};
    std::for_each(number_array.begin(),number_array.end(),[&](int n){
        if(n == 0){return;}
        else if(n % 2  == 0){even_number.push_back(n);}
        else{odd_number.push_back(n);}
    });
    std::cout<< "the even numbers are:";
    std::for_each(even_number.begin(),even_number.end(),[](int n){std::cout << n << " ";});
    std::cout<< std::endl << "the odd numbers are:";
    std::for_each(odd_number.begin(),odd_number.end(),[](int n){std::cout << n << " ";});
    return 0;
}
