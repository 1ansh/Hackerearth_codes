#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
    string s;
    int l,i,flag=0;
    cin >> s;
    l = s.length();
    for(i=0;i<l/2;i++)
    {
    	if(s[i]!=s[l-1-i])
    	{
    		flag++;
		}
    }
    if(flag==0)
    {
    	cout << "YES"<<endl;
	}
	else
	{
		cout << "NO" <<endl;
	}
}