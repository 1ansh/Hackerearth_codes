#include <iostream>
#include <cstring>
using namespace std;
long int factorial(long int);
int main()
{
    long int n,fact;
    cin>>n;
    fact=factorial(n);
    cout<<fact<<endl;
}
long int factorial(long int n)
{
	int ans;
	if(n>1)
	{
		ans=n*factorial(n-1);
	}
	else
	{
		ans=1;
	}
	return ans;
}