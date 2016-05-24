#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;
int main()
{
	vector<int>vec={0,1,2,3,4,5,6,6,6,};
	cout<<count(vec.begin(),vec.end(),6)<<endl;
	
	list<string>str={"a","aa","aaa"};
	cout<<count(str.begin(),str.end(),"a")<<endl;
	return 0;
}
