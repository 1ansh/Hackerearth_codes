#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,temp;
	cin>>n;
	vector<int> v1(100000,0);
	vector<int> v2(100000,0);
	for(i=0;i<n;i++)
	{
		cin>>v1[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>temp;
		v2[i]=v1[i]+temp;
	}
	for(i=0;i<n;i++)
	{
		cout<<v2[i]<<" ";
	}
}

