#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t,tq;
    cin>>t;
    for(tq=0;tq<t;tq++)
    {
    	int n,i;
    	cin>>n;
    	int max[n],count=1,maxm;
    	for(i=0;i<n;i++)
    	{
    		cin>>max[i];
		}
		maxm=max[0];
		for(i=1;i<n;i++)
		{
			if(max[i]<=maxm)
			{
				count++;
				maxm=max[i];
			}
		}
		cout<<count<<endl;
	}
}
