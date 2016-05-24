#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>

using std::string;

int main()
{
    std::ifstream ifs("̰����.cpp");
    std::istream_iterator<string> in(ifs), eof;
    std::vector<string> vec;
    std::copy(in, eof, back_inserter(vec));
    
    // output
    std::copy(vec.cbegin(), vec.cend(), std::ostream_iterator<string>(std::cout, "\n"));
}
