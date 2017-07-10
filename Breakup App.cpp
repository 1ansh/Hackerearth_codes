#include <bits/stdc++.h>
using namespace std;


int main() 
{
	int t,m;
	cin>>t;
	int totdate=0,totnodate=0;
	for(m=0;m<t;m++)
	{
		string s;
		getline(cin,s);
		int weightage,i,l=s.length();
		if(s[0]=='G')
		{
			weightage=2;
		}
		else if(s[0]=='M')
		{
			weightage=1;
		}
		for(i=0;i<l;i++)
		{
			if((s[i]=='1' && s[i+1]=='9') || (s[i]=='2' && s[i+1]=='0'))
			{
				totdate=totdate+weightage;
			}
			else if((s[i]>='1' && s[i]<='9') && !((s[i-1]>='1' && s[i-1]<='9'))
			{
				totnodate=totnodate+weightage;
			}
		}
	}
	cout<<totdate<<"	"<<totnodate;
}

