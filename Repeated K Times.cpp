#include <bits/stdc++.h>
using namespace std;


int main() 
{
	int n,i;
	cin>>n;
	vector<int> ar(n);
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	sort(ar.begin(),ar.end());
	int k,num,count=1;
	cin>>k;
	for(i=1;i<n;i++)
	{
		if(ar[i]==ar[i-1])
		{
			count++;
		}
		else
		{
			if(count==k)
			{
				break;
			}
			count=1;
		}
	}
	cout<<ar[i-1]<<endl;
}

