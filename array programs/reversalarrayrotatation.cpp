#include<iostream>
using namespace std;
void swap(int arr[],int a , int b)
{
    int temp;
    temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}
void reverse ( int arr[], int l, int r)
{
    int x=(l+r)/2;
for(int i=l;i<=x;i++,r--)
{
swap(arr,i,r);
}
}
int main ()
{
    int a[10];
    int n=10,d;
cout<<"Enter the array : ";
for(int i=0;i<10;i++)
cin>>a[i];
cout<<"enter how much you want to rotate"; 
cin>>d;
d=d%10;
reverse(a,0,d-1);
reverse(a,d,n-1);
reverse(a,0,n-1);
for(int i=0;i<10;i++)
cout<<a[i]<<endl;
return 0;
}