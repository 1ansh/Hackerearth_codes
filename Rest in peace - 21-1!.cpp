#include <bits/stdc++.h>
using namespace std;


int main() 
{
	int t,m;
	cin>>t;
	for(m=0;m<t;m++)
	{
		int n,i;
		cin>>n;
		if(n%21==0)
		{
			cout<<"The streak is broken!"<<endl;
			continue;
		}
		string s=to_string(n);
		int l=s.length();
		bool flag=false;
		for(i=0;i<l-1;i++)
		{
			if(s[i]=='2' && s[i+1]=='1')
			{
				flag=true;
				break;
			}
		}
		if(flag)
		{
			cout<<"The streak is broken!"<<endl;
		}
		else
		{
			cout<<"The streak lives still in our heart!"<<endl;
		}
	}
}

