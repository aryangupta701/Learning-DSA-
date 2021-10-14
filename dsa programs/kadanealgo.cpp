#include<iostream>
using namespace std;
int kadane( int a[], int k);
int main ()
{
     int k , i, a[100],ans[2]; 
    cout<< " enter the size of array : ";
cin>>k;
cout << " Enter the elements of the array : ";
for ( i=0;i<k;i++)
cin>>a[i];
cout<<kadane(a,k);
}

int kadane( int a[], int k)
{

int i,sum=0,mxsum=0;
for (int i=0; i<k;i++)
{
sum=sum+a[i];

if(sum<0)
{
      sum=0;

}
  if((sum-a[i])>mxsum)
    mxsum=sum-a[i];
}
return mxsum;

}