#include <bits/stdc++.h>

using namespace std;


int main()
{
	long long int n,i;
	cin>>n;
	long long int ar[n],sum=0,sum1=0,max=INT_MIN,prod;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		sum=sum+ar[i];
	}
	for(i=0;i<n;i++)
	{
		sum1+=ar[i];
		sum-=ar[i];
		prod=sum*sum1;
		if(prod>max)
		{
			max=prod;
		}
	}
	cout<<max;
}

