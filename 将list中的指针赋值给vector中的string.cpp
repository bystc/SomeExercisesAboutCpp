#include<iostream>
#include<vector>
#include<string>
#include<list>
using namespace std;
int main()
{
	list<const char*>l={"bystc"};
	vector<string>str;
	str.assign(l.begin(),l.end());
	for(auto p:str)
	cout<<p<<endl;
	return 0;
	
}
