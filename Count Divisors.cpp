#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
    int l,r,k,flag=0;
    cin>>l;
    cin>>r;
    cin>>k;
    for(int i=l;i<=r;i++)
    {
    	if(i%k==0)
    	{
    		flag++;
		}
	}
	cout<<flag<<endl;
}