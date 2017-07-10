#include <bits/stdc++.h>
using namespace std;


int main() 
{
	int t,i;
	cin>>t;
	vector<int> ar(t);
	for(i=0;i<t;i++)
	{
		cin>>ar[i];
	}
	int q;
	cin>>q;
	for(i=0;i<q;i++)
	{
		int j,tot,sum=0,trans=-1;
		cin>>tot;
		for(j=0;j<t;j++)
		{
			sum=sum+ar[j];
			if(sum>=tot)
			{
				trans=j+1;
				break;
			}
		}
		cout<<trans<<endl;
	}
}

