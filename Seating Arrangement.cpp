#include <iostream>
using namespace std;

int main()
{
	long int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int n,k;
		cin>>n;
		k=n%12;
		n=n-1;
		if(k==1)
		{
			cout<<12+12*(n/12)<<" "<<"WS"<<endl;
		}
		else if(k==2)
		{
			cout<<11+12*(n/12)<<" "<<"MS"<<endl;
		}
		else if(k==3)
		{
			cout<<10+12*(n/12)<<" "<<"AS"<<endl;
		}
		else if(k==4)
		{
			cout<<9+12*(n/12)<<" "<<"AS"<<endl;
		}
		else if(k==5)
		{
			cout<<8+12*(n/12)<<" "<<"MS"<<endl;
		}
		else if(k==6)
		{
			cout<<7+12*(n/12)<<" "<<"WS"<<endl;
		}
		else if(k==7)
		{
			cout<<6+12*(n/12)<<" "<<"WS"<<endl;
		}
		else if(k==8)
		{
			cout<<5+12*(n/12)<<" "<<"MS"<<endl;
		}
		else if(k==9)
		{
			cout<<4+12*(n/12)<<" "<<"AS"<<endl;
		}
		else if(k==10)
		{
			cout<<3+12*(n/12)<<" "<<"AS"<<endl;
		}
		else if(k==11)
		{
			cout<<2+12*(n/12)<<" "<<"MS"<<endl;
		}
		else if(k==0)
		{
			cout<<1+12*(n/12)<<" "<<"WS"<<endl;
		}
	}
}