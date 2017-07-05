#include <bits/stdc++.h>

using namespace std;


int main()
{
	int n,i;
	bool flag=true;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	if(n==1 && a[0]!=0)
	{
		cout<<"NO";
	}
	else if(n==1 && a[0]==0)
	{
		cout<<"YES";
	}
	else
	{
		for(i=0;i<n-1;i++)
		{
			if(a[i]==0)
			{
				continue;
			}
			if(a[i]>a[i+1])
			{
				flag=false;
			}
			else
			{
				a[i+1]-=a[i];
				a[i]=0;
			}
		}
		if(a[n-1]!=0)
		{
			flag=false;
		}
		if(flag)
		{
			cout<<"YES";
		}
		else
		{
			cout<<"NO";
		}
	}
}
