#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int h[n],i,count=1;
    for(i=0;i<n;i++)
    {
		cin>>h[i];
	}
	for(i=1;i<n;i++)
	{
		if(h[i]<h[i-1])
		{
			count++;
		}
	}
	cout<<count;
}
