#include <bits/stdc++.h>
using namespace std;


int main() 
{
	int t,m;
	cin>>t;
	for(m=0;m<t;m++)
	{
		string s;
		cin>>s;
		int l=s.length();
		int j,cnt_suvojit=0,cnt_suvo=0;
		for(j=0;j<l;j++)
		{
			if((s[j]=='S' && s[j+1]=='U' && s[j+2]=='V' && s[j+3]=='O' && s[j+4]=='J' && s[j+5]=='I' && s[j+6]=='T'))
			{
				cnt_suvojit++;
			}
			else if(s[j]=='S' && s[j+1]=='U' && s[j+2]=='V' && s[j+3]=='O')
			{
				cnt_suvo++;
			}
		}
		cout<<"SUVO = "<<cnt_suvo<<", SUVOJIT = "<<cnt_suvojit<<endl;
	}
}

