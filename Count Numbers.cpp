#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int T,l,count=0,i,j;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&l);
        char A[l+1];
        scanf("%s",&A);
        for(i=0;i<l+1;i++)
        {
            if(isdigit(A[i])&&!isdigit(A[i+1]))
            {
                count++;
            }
        }
        printf("%d\n",count);
        count=0;
    }
}
