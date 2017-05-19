#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
    string x;
    int k,i=0,j=0;
    cin>>x>>k;
    for(i=0;i<x.length();i++)
    {
    	if(x[i]!='9' && k>0)
    	{
    		x[i]='9';
    		j++;
		}
		if(j==k)
		{
			break;
		}
	}
	cout<<x<<endl;
}
