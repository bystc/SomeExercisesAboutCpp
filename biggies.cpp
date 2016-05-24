#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// from ex 10.9
void elimdups(std::vector<std::string> &vs)
{
    std::sort(vs.begin(), vs.end());
    auto new_end = std::unique(vs.begin(), vs.end());
    vs.erase(new_end, vs.end());
}


// ex10.18
void biggies_partition(std::vector<std::string> &vs, std::size_t sz)
{
    elimdups(vs);
    
    auto pivot = partition(vs.begin(), vs.end(), [sz](const std::string &s){
        return s.size() >= sz;}
    );

    for(auto it = vs.cbegin(); it != pivot; ++it)
        std::cout << *it << " ";
}


// ex10.19
void biggies_stable_partition(std::vector<std::string> &vs, std::size_t sz)
{
    elimdups(vs);
    
    auto pivot = stable_partition(vs.begin(), vs.end(), [sz](const std::string& s){
        return s.size() >= sz;
    });

    for(auto it = vs.cbegin(); it != pivot; ++it)
        std::cout << *it << " ";
}


int main()
{
   
    std::vector<std::string> v{
        "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"
    };
    
   
    std::vector<std::string> v1(v);
    biggies_partition(v1, 4);
    std::cout << std::endl;

   
   
    std::vector<std::string> v2(v);
    biggies_stable_partition(v2, 4);
    std::cout << std::endl;

    return 0;
}
