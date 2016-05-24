
#include <algorithm>
#include <iostream>
#include <vector>
#include <list>

int main()
{
    std::vector<const char *> roster1{"Mooophy", "pezy", "Queequeg"};
    std::list<const char *>  roster2{"Mooophy", "pezy", "Queequeg", "shbling", "evan617"};
    std::cout << std::equal(roster1.cbegin(), roster1.cend(), roster2.cbegin());
}

