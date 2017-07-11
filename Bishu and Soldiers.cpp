#include <bits/stdc++.h>
using namespace std;

 
int main() 
{
	int n,i,j;
	cin>>n;
	vector<int> ar(n);
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	sort(ar.begin(),ar.end());
	int t;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int q,count=0,sum=0;
		cin>>q;
		for(j=0;j<n;j++)
		{
			if(ar[j]>q)
			{
				break;
			}
			count++;
			sum=sum+ar[j];
		}
		cout<<count<<" "<<sum<<endl;
	}
}

