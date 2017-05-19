#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
    string x;
    int k,i,flag=0;
    cin>>x;
    for(i=5;i<x.length();i++)
    {
    	if(x[i-1]==x[i] && x[i-2]==x[i] && x[i-3]==x[i] && x[i-4]==x[i] && x[i-5]==x[i])
    	{
    		flag++;
    		break;
		}
	}
	if(flag>0)
	{
		cout<<"Sorry, sorry!"<<endl;
	}
	else
	{
		cout<<"Good luck!"<<endl;
	}
}
