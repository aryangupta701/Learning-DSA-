#include<iostream>
#include<cstring>
#include<math.h>

using namespace std;
int rainwater(int a[], int n);
int main ()
{
    int a[100];
    cout<<"Enter the size of array : ";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
 cout<<rainwater(a,n);
}

int rainwater(int a[], int n)
{ 
int left[n], right[n];
int res=0;
left[0]=a[0];
right[n-1]=a[n-1];

for(int i=1; i<n; i++)
{
    left[i]=max(left[i-1],a[i]);
}
for(int i=n-2;i>=0;i--)
{
    right[i]=max(right[i+1],a[i]);
}

for(int i=0;i<n;i++)
res=res + min(left[i],right[i])-a[i];
return res;
}