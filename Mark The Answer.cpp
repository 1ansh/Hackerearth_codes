#include <iostream>
using namespace std;

int main()
{
    long int n,x,left=0,mark=0;
    cin>>n>>x;
    long int i,arr[n];
    for(i=0;i<n;i++)
    {
    	cin>>arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]>x)
    	{
    		left++;
		}
		else if(arr[i]<=x)
		{
			mark++;
		}
		if(left==2)
		{
			break;
		}
	}
	cout<<mark<<endl;
}

