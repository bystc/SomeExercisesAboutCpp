#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main()
{
	int ia[]={0,1,1,2,3,5,8,13,21,55,89};
	vector<int>vec(ia,end(ia));
	list<int>lst(vec.begin(),vec.end());
	
	for(auto i=vec.begin();i!=vec.end();)
	if(! (*i%2))
	i=vec.erase(i);
	else
	++i;
	
	for(auto i=lst.begin();i!=lst.end();)
	if(*i%2)
	i=lst.erase(i);
	else
	++i;
	
	cout << "list : ";
    for(auto i : lst)   cout << i << " ";
    cout << "\nvector : ";
    for(auto i : vec)   cout << i << " ";
    cout << std::endl;

    return 0;
 } 
