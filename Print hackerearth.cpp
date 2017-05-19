#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main()
{
	long int n,i,h_cnt=0,a_cnt=0,c_cnt=0,k_cnt=0,e_cnt=0,r_cnt=0,t_cnt=0,arr[7],min;
	cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n;i++)
    {
    	if(s[i]=='h')
    	{
    		h_cnt++;
		}
		if(s[i]=='a')
    	{
    		a_cnt++;
		}
		if(s[i]=='c')
    	{
    		c_cnt++;
		}
		if(s[i]=='k')
    	{
    		k_cnt++;
		}
		if(s[i]=='e')
    	{
    		e_cnt++;
		}
		if(s[i]=='r')
    	{
    		r_cnt++;
		}
		if(s[i]=='t')
    	{
    		t_cnt++;
		}
	}
	arr[0]=h_cnt/2;
	arr[1]=a_cnt/2;
	arr[2]=c_cnt/1;
	arr[3]=k_cnt/1;
	arr[4]=e_cnt/2;
	arr[5]=r_cnt/2;
	arr[6]=t_cnt/1;
	min=arr[0];
	for(i=0;i<7;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	cout<<min<<endl;
}
