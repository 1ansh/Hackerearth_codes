#include <bits/stdc++.h>

using namespace std;


int main()
{
	int n,i;
	cin>>n;
	vector<int> v(n);
	for(i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	int curr=v[0],freq=1,max=INT_MIN,withmax=v[0];
	for(i=1;i<n;i++)
	{
		if(v[i]==curr)
		{
			freq++;
			if(freq>max)
			{
				max=freq;
				withmax=curr;
			}
		}
		else
		{
			curr=v[i];
			freq=1;
		}
	}
	cout<<withmax;
}
