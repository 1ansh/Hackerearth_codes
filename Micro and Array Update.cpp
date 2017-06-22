#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int n,k,j,temp,maxdiff=0;
		cin>>n>>k;
		for(j=0;j<n;j++)
		{
			cin>>temp;
			if(temp<k)
			{
				if(k-temp>maxdiff)
				{
					maxdiff=k-temp;
				}
			}
		}
		cout<<maxdiff<<endl;
	}
}

