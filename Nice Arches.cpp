#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	int t,T,count=0;
	cin>>t;
	for(T=0;T<t;T++)
	{
		string str;
		stack<char> s;
		cin>>str;
		int i;
		for(i=0;str[i];i++)
		{
			if(s.empty())
			{
				s.push(str[i]);
			}
			else if(s.top()!=str[i])
			{
				s.push(str[i]);
			}
			else if(s.top()==str[i])
			{
				s.pop();
			}
		}
		if(s.empty())
		{
			count++;
		}
	}
	cout<<count<<endl;
}
