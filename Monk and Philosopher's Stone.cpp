#include <bits/stdc++.h>
using namespace std;

int main()
{
	stack <int> monk;
	int n,i,sum=0;
	cin>>n;
	int hp[n];
	for(i=0;i<n;i++)
	{
		cin>>hp[i];
	}
	int q,x,currInd=0;
	cin>>q>>x;
	for(i=0;i<q;i++)
	{
		string query;
		cin>>query;
		if(query=="Harry")
		{
			monk.push(hp[currInd]);
			sum=sum+hp[currInd];
			currInd++;
		}
		else
		{
			sum=sum-monk.top();
			monk.pop();
		}
		if(sum==x)
		{
			break;
		}
	}
	if(sum==x)
	{
		cout<<monk.size()<<endl;
	}
	else
	{
		cout<<"-1"<<endl;
	}
}

