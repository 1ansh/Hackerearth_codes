#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	vector<int> v(1100,0);
	int n,i,key;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>key;
		v[key]++;
	}
	int q;
	cin>>q;
	for(i=0;i<q;i++)
	{
		int num;
		cin>>num;
		if(v[num]==0)
		{
			cout<<"NOT PRESENT"<<endl;
		}
		else
		{
			cout<<v[num]<<endl;
		}
	}
}

