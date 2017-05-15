#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
    long long int n,i,prod=1;
    cin >> n;
    long long int arr[n];
    for(i=0;i<n;i++)
    {
    	cin >> arr[i];
    	prod=(prod*arr[i])%1000000007;
	}
	cout<<prod;
}