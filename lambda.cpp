#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using std::vector;
using std::count_if;
using std::string;


// Exercise 10.20
std::size_t bigerThan6(vector<string> const& v)
{
    return count_if(v.cbegin(), v.cend(), [](string const& s){
        return s.size() > 6;
    });
}


int main()
{
   
    vector<string> v{
        "alan","mosophy","1234567","1234567","1234567","1234567"
    };
    std::cout  << bigerThan6(v) << std::endl;

    
    int i = 7;
    auto check_and_decrement = [&i](){ return --i ? false : true; };
  
    while(!check_and_decrement())
        std::cout << i << " ";
    std::cout << i << std::endl;

    return 0;
}
