#include<iostream>
#include<string>
#include<vector>
#include<cctype> 
using namespace std;
int main()
{
	vector<string>vec;
	for(string word;cin>>word;vec.push_back(word))
	
	for (auto &str : vec) for (auto &c : str) c = toupper(c);
	for(int i;i!=vec.size();i++)
	{
		if (i != 0 && i % 8 == 0) cout << endl;
        cout << vec[i] << " ";
	}
	return 0;
}
