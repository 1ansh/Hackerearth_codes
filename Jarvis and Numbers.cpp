#include<iostream>
using namespace std;

int SUM=0;
void printInBase(int x, int y)
{
   if ( x < y )
   {
//      cout << x<<endl;
      SUM=SUM+x;
      return;
   }

   int rem = x%y;
   printInBase(x/y, y);
//   cout << rem<<endl;
   SUM=SUM+rem;
}

int gcd(int a, int b)
{
	if(b == 0)
	{
	        return a;
	}
	else
	{
		return gcd(b, a % b);
	}
}

int main()
{
    int t,i;
    cin>>t;
    for(i=0;i<t;i++)
    {
    	SUM=0;
    	int n,j,sum=0,hcf;
    	cin>>n;
    	for(j=2;j<n;j++)
    	{
    		printInBase(n,j);
		}
		hcf=gcd(SUM,n-2);
		cout<<(n-2)/hcf<<endl;
//		cout<<SUM<<endl;
	}
}
