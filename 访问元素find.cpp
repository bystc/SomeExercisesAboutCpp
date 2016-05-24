#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>

int main()
{
    std::map<std::string, std::vector<int>> m{ { "Alan",{ 1,2,3,4,5, } },{ "John",{ 1,5,6,7,8 } } };
    // ex11.28
    std::map<std::string, std::vector<int>>::iterator it;
    // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    // type used to define this iterator.
    it = m.find("Alan");

    return 0;
}
