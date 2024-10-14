#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline  (cin,s);
	unordered_map <char,int> dem;
	for (char c : s)
	{
		dem[c]++;
	}
	
	for (const auto &ellen : dem)
	{
		cout<<ellen.first<<" "<<ellen.second<<endl;
	}

	return 0;
} 








