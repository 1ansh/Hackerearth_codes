#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
	int n,numQ,i;
	cin>>n;
	cin>>numQ;
	cin.ignore();
	string s;
	getline(cin,s);
	s.erase(remove(s.begin(),s.end(),' '),s.end());
	for(i=0;i<numQ;i++)
	{
		int q;
		cin>>q;
		if(q==1)
		{
			int x;
			cin>>x;
			if(s[x-1]=='0')
			{
				s[x-1]='1';
			}
			else
			{
				s[x-1]='0';
			}
		}
		else
		{
			int l,r;
			cin>>l>>r;
			if(s[r-1]=='1')
			{
				cout<<"ODD"<<endl;
			}	
			else
			{
				cout<<"EVEN"<<endl;
			}		
		}
	}
}

