#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
    string s,dup;
    int l,i,k;
    cin >> s;
    l = s.length();
    for(i=0;i<l;i++)
    {
//    	cout << s[i] <<endl;
    	k=int(s[i]);
    	if(k < 91)
    	{
    		k = k + 32;
		}
		else
		{
			k = k - 32;
		}
		dup[i]=char(k);
		cout << dup[i];
    }
//    cout << dup;
}