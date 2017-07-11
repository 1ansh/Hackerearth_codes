#include <bits/stdc++.h>
using namespace std;

struct fan
{
	string name;
	int quo;
};

bool myfunc(fan a, fan b)
{
	if(a.quo==b.quo)
	{
		return a.name<b.name;
	}
	return a.quo>b.quo;
}

int main() 
{
	int n,t,i,j;
	cin>>n>>t;
	fan ar[n];
	for(i=0;i<n;i++)
	{
		cin>>ar[i].name>>ar[i].quo;
	}
	sort(ar,ar+n,myfunc);
	for(i=0;i<t;i++)
	{
		cout<<ar[i].name<<endl;
	}
}

