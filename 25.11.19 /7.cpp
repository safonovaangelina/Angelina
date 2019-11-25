#include <algorithm>
#include <string>
#include <iostream>
 
int main()
{
    std::string s = "acb"; // что переставляем
    std::sort(s.begin(), s.end());
    do
    {
        std::cout << s << std::endl;
    } while(std::next_permutation(s.begin(), s.end()));
}
