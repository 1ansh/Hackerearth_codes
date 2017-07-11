#include <bits/stdc++.h>
using namespace std;

 
int main() 
{
	int t,m;
	cin>>t;
	for(m=0;m<t;m++)
	{
		int n,k,p,i,count=0,key,num=-1;
		cin>>n>>k>>p;
		count = p;
		for(i=0;i<k;i++)
		{
			cin>>key;
			if(key<=count)
			{
				count++;
			}
		}
		if(count>n)
		{
		    cout<<"-1"<<endl;
		}
		else
		{
		    cout<<count<<endl;   
		}
	}
}

