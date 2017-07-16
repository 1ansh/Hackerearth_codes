#include <iostream>
using namespace std;

int main()
{
    int n,i,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int k;
        cin>>k;
        sum=sum+k;
    }
    if(sum/2==n-1)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
}

