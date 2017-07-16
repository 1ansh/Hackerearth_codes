#include<bits/stdc++.h>
using namespace std;
 
struct Point
{
	int x;
	int y;
};

int main()
{
	int n,i,j,currx=0,curry=0;
	string s;
	char ch;
	cin>>n;
	Point p[n+1];
	for(i=0;i<n;i++)
	{
		cin>>p[i].x>>p[i].y;
	}
	p[n].x=0;p[n].y=0;
	for(i=0;i<n+1;i++)
	{
		if(p[i].y-curry<0)
		{
			ch='D';
			s.append(abs(p[i].y-curry),ch);
		}
		if(p[i].x-currx<0)
		{
			ch='L';
			s.append(abs(p[i].x-currx),ch);
		}
		if(p[i].x-currx>0)
		{
			ch='R';
			s.append(abs(p[i].x-currx),ch);
		}
		if(p[i].y-curry>0)
		{
			ch='U';
			s.append(abs(p[i].y-curry),ch);
		}
		currx=p[i].x;
		curry=p[i].y;
	}
	cout<<s.length()<<endl<<s;
}
