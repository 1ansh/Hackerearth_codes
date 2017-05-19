#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	int min=a[0],max=a[0],count=0;
	for(i=0;i<n;i++)
    {
    	if(a[i]<min)
    	{
    		min=a[i];
		}
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	for(i=min+1;i<max;i++)
	{
		int flag=0;
		for(j=0;j<n;j++)
		{
			if(a[j]==i)
			{
				flag++;
			}
			
		}
		if(flag==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}
