#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str="hello world!";
	for(char &c:str)
	c='X';
	cout<<str<<endl;
	return 0;
}
