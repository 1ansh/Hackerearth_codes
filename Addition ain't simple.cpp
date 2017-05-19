#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
    	string s,dup;
    	cin>>s;
    	dup=s;
    	reverse(dup.begin(),dup.end());
    	int l,j,sum;
    	l=s.length();
    	for(j=0;j<l;j++)
    	{
    		sum=((int(s[j])%96+(int(dup[j])%96))%26)+96;
    		if(sum==96)
    		{
    			sum=122;
			}
    		s[j]=sum;
		}
		cout<<s<<endl;
	}
}
