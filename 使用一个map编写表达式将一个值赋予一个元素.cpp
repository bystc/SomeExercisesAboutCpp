#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<cctype>
using namespace std;
int main()
{
	std::map<int, std::string> map;
	map[25] = "Alan";
	std::map<int, std::string>::iterator it = map.begin();
	it->second = "Wang";
	cout<<it->first<<endl;
	
	

} 
