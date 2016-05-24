#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	char c;
	vector<char>vec;
	while(cin>>c)
	vec.push_back(c);
	
	string s(vec.begin(),vec.end());
	

	cout<<s<<endl;
	return 0;
}
