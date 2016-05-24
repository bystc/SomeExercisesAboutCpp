#include<iostream>
#include<string>
int main()
{
	using std::string;
	using std::cin;
	using std::cout;
	using std::endl;
	for(string str;getline(cin,str);cout<<str<<endl);
	return 0;
}
