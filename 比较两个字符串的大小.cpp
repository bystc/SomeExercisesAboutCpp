#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	string a("dnwindiw"),b("dwadwad");
	if(a==b)
		cout<<"the strings are equal."<<endl;
	else if(a>b)
		cout<<"a>b"<<endl;
	else
		cout<<"a<b"<<endl;
	cout<<"================="<<endl;
	const char *c="dawdwad";
	const char *d="dwdacaaw";
	auto result=strcmp(c,d);
	if(result==0)
		cout<<"same strings"<<endl;
	else if(result>0)
		cout<<"c>d"<<endl;
	else
		cout<<"c<d"<<endl;
	return 0;
}
