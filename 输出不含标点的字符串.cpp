#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	for(string s;getline(cin,s);cout<<endl)
		for(auto c:s)
		if(!ispunct(c))cout<<c;
	return 0;
}
