#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;

int min(int a,int b)
{
	return a<b?a:b;
}

int main()
{
	int t,m;
	cin>>t;
	for(m=0;m<t;m++)
	{
		int n,x,i,dis=1;
		cin>>n>>x;
		vector<int> ar(n);
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		sort(ar.begin(),ar.end());
		for(i=1;i<n;i++)
		{
			if(ar[i]!=ar[i-1])
			{
				dis++;
			}
		}
		if(dis<x)
		{
			cout<<"Bad"<<endl;
		}
		else if(dis>x)
		{
			cout<<"Average"<<endl;
		}
		else
		{
			cout<<"Good"<<endl;
		}
	}
}
