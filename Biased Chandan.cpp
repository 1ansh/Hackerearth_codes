#include <bits/stdc++.h>

using namespace std;


int main()
{
	int n,i,key,sum=0;
	cin>>n;
	stack<int> s;
	for(i=0;i<n;i++)
	{
		cin>>key;
		if(key!=0)
		{
			s.push(key);
			sum=sum+key;
		}
		else if(key==0 && i!=0)
		{
			sum=sum-s.top();
			s.pop();
		}
	}
	cout<<sum<<endl;
}
