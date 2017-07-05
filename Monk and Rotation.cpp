#include <bits/stdc++.h>

using namespace std;


int main()
{
	int t,tq;
	cin>>t;
	for(tq=0;tq<t;tq++)
	{
		int n,k,i,pos,x;
		cin>>n>>k;
		k=k%n;
		int ar[n];
		for(i=0;i<n;i++)
		{
			cin>>x;
			pos=((i+k)>=n)?((i+k)-n):(i+k);
			ar[pos]=x;
		}
		for(i=0;i<n;i++)
		{
			cout<<ar[i]<<" ";
		}
		cout<<endl;
	}
}

