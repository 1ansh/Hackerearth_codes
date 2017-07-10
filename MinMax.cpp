#include <bits/stdc++.h>
using namespace std;


int main() 
{
	long long n,i,max=INT_MIN,min=INT_MAX,sum=0;
	cin>>n;
	vector<long long> ar(n);
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
		sum=sum+ar[i];
		if(ar[i]>max)
		{
			max=ar[i];
		}
		if(ar[i]<min)
		{
			min=ar[i];
		}
	}
	cout<<sum-max<<" "<<sum-min<<endl;
}

