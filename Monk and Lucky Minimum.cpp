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
		vector<int> ar(n);
		for(i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		sort(ar.begin(),ar.end());
		int freq=0,min=ar[0];
		for(i=0;i<n;i++)
		{
			if(ar[i]==min)
			{
				freq++;
			}
			else
			{
				break;
			}
		}
		if(freq%2==0)
		{
			cout<<"Unlucky"<<endl;
		}
		else
		{
			cout<<"Lucky"<<endl;
		}
	}
}
