#include <bits/stdc++.h>
using namespace std;

 
int main() 
{
	int n,i,j;
	cin>>n;
	bool flag=true;
	vector<int> med(n);
	vector<int> per(n);
	for(i=0;i<n;i++)
	{
		cin>>med[i];
	}
	sort(med.begin(),med.end());
	for(i=0;i<n;i++)
	{
		cin>>per[i];
	}
	sort(per.begin(),per.end());
	for(i=0;i<n;i++)
	{
		if(med[i]<per[i])
		{
			flag=false;
			break;
		}
	}
	if(flag)
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
}

