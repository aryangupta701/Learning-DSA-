#include<iostream>
using namespace std;
void sort (int a[], int size)
{
    int j,t,swap;
    for(int i=0; i<size-1;i++)
    { swap=0;
        for(j=0;j<size-1-i;j++)
        {
            if(a[j]>a[j+1])
            {   swap=1;
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
        if(swap==0)
        break;
    }

}
int main()
{
    int a[]={1, 2, 1, 4, 5, 6, 8, 8};
    int n=8;
    int b[n];
    sort(a,n);
    int j=0,k=n-1;
    for(int i=n-1;i>=0;i--)
    {
if(i&1==1)
{
    b[i]=a[k];
    k--;
}
else 
{
    b[i]=a[j];
    j++;
}
    }
   
for(int i=0;i<n;i++)
cout<<b[i];
return 0;

}