#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    int first_value=0;
    int second_value=0;
    int third_value=0;
    std::vector<int> vector_values;
    std::cout << "please enter the three values seperated by a space"<<std::endl;
    std::cin >>first_value >> second_value >> third_value; 
    vector_values.push_back(first_value);
    vector_values.push_back(second_value);
    vector_values.push_back(third_value);
    // auto minimum_value = 
    std::cout << "the maximum value is:" << *std::max_element(vector_values.begin(), vector_values.end()) << std::endl;
    return 0;
}