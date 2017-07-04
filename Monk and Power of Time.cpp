#include <bits/stdc++.h>

using namespace std;

void rotate(int arr[],int n,int ind)
{
	int i,key=arr[ind];
	for(i=ind;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	arr[n-1]=key;
}

int main()
{
    int n;
    cin>>n;
    int call[n],ideal[n],i,j=0,count=0;
    for(i=0;i<n;i++)
    {
    	cin>>call[i];
	}
	for(i=0;i<n;i++)
    {
    	cin>>ideal[i];
	}
	for(i=0;i<n;i++)
	{
		while(j<n)
		{
			if(call[j]==ideal[i])
			{
				j++;
				count++;
				break;
			}
			else
			{
				rotate(call,n,j);
				count++;
			}
		}
	}
	cout<<count;
}
