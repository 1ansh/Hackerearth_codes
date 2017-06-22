#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int n,j,inID,curr,prev;
		cin>>n>>inID;
		curr=inID;
		for(j=0;j<n;j++)
		{
			char type;
			cin>>type;
			if(type=='P')
			{
				prev=curr;
				cin>>curr;
			}
			else
			{
				int temp;
				temp=prev;
				prev=curr;
				curr=temp;
			}
		}
		cout<<"Player "<<curr<<endl;
	}
}

