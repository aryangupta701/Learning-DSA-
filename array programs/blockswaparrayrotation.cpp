#include<iostream>
using namespace std;
void swapped(int arr[],int a , int b)
{
    int temp;
    temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}
void swap ( int a[], int fi, int si, int d)
{
for(int i=0;i<d;i++)
{
    swapped(a,fi+i,si+i);
}
}
void arrayrotate (int a[], int d, int n)
{
d=d%n;
if(d==0)
return ;
if(n-d==d)
{
    swap(a,0,d,d);
    return;
}
else if(d<n-d)
{
    swap(a,0,n-d,d);
    arrayrotate(a,d,n-d);
}
else if(d>n-d)
{
    swap(a,0,d,n-d);
    arrayrotate(a+n-d,2*d-n,d);
}
}

int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    int d, n=10;
cout<< "Enter how much you want to rotate the array: ";
cin>>d;
arrayrotate(a,d,n);
for(int i=0;i<10;i++)
cout<<a[i]<<" ";
}