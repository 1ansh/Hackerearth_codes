#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,m;
    cin>>t;
    for(m=0;m<t;m++)
    {
    	int e,i;
    	cin>>e;
    	set<int> s;
    	for(i=0;i<e;i++)
    	{
    		int a,b;
    		cin>>a>>b;
    		s.insert(a);
    		s.insert(b);
		}
		cout<<s.size()<<endl;
	}
}

