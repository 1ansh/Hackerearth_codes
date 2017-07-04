#include <bits/stdc++.h>

using namespace std;


int main()
{
    int q,i;
    stack <int> s;
    cin>>q;
    for(i=0;i<q;i++)
    {
    	int que;
    	cin>>que;
    	if(que==1)
    	{
    		if(!(s.empty()))
    		{
    			cout<<s.top()<<endl;
    			s.pop();
			}
			else
			{
				cout<<"No Food"<<endl;
			}
		}
		else
		{
			int cost;
			cin>>cost;
			s.push(cost);
		}
	}
}
