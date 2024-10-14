#include <bits/stdc++.h>
using namespace std;
bool ellen (int a, int b)
{
	return abs(a) < abs(b);
}

bool joe (int a, int b)
{
	return abs(a) > abs(b);
}

int c[1000005];
int main()
{
//	freopen ("BAI3.INP","r",stdin);
//	freopen ("BAI3.OUT","w",stdout);
	int n;
	cin>>n;
	for  (int i=0; i<n; i++)
	{
		cin>>c[i];
	}
	cout<<endl;
	
	sort (c,c+n,ellen);
	for (int i=0; i<n; i++)
	{  
	    if (c[i]%2!=00)
	    {
	    	cout<<c[i]<<endl;
		}
	}
	
	sort (c,c+n,joe);
	for (int i=0; i<n; i++)
	{
		if (c[i]%2==0)
		{
			cout<<c[i]<<endl;
		}
	}
	
	
	
	return 0;
}




