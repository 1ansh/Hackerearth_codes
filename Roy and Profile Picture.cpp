#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
    int l,n,i;
    cin>>l;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int w,h;
		cin>>w;
		cin>>h;
		if(w<l || h<l)
		{
			cout<<"UPLOAD ANOTHER"<<endl;
		}
		else if(w==h && w>=l && h>=l)
		{
			cout<<"ACCEPTED"<<endl;
		}
		else if(w!=h && w>=l && h>=l)
		{
			cout<<"CROP IT"<<endl;
		}
	}    
}