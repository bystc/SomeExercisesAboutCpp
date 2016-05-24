#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool is_prefix(vector<int>const &s1,vector<int>const &s2)
{
	if(s1.size()>s2.size())
	{
		return is_prefix(s1,s2);
		
	}
	for(unsigned i=0;i<s2.size();i++)
	{
		if(s1[i]==s2[i]){
		
		return true;}
		else{
		
		return false;
	}
	}

}
int main()
{
	vector<int>r1={0,1,1,2};
	vector<int>r2={0,1,1,2,3,5,8};
	cout<<(is_prefix(r1,r2)?"yes":"no")<<endl;
	return 0;
}
