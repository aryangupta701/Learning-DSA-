#include<iostream>
using namespace std;
int findsum(int a[], int n)
{
    int i,arrsum=0,sum=0,maxsum=0;
    for(i=0;i<n;i++)
    {
        arrsum=arrsum+a[i];
maxsum=maxsum + i*a[i];
    }
    sum=maxsum;
    for(i=1;i<n;i++)
    {
        sum=sum+arrsum-n*a[n-i];
        if(sum>maxsum)
        {
            maxsum=sum;
        }
    }
    return maxsum;
}

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int n=10;
    cout<<findsum(a,n);
    return 0;
}