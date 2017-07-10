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
	int k,ind=-1;
	cin>>k;
	for(i=0;i<n;i++)
	{
		if(ar[i]==k)
		{
			ind=i;
			break;
		}
	}
	cout<<ind;
}

