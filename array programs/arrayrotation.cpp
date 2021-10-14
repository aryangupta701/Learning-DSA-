#include<iostream>
using namespace std;
int gcd(int a , int b)
{
    if(b==0)
    return a;

    else return gcd(b,a%b);
}
void rotate(int arr[], int d, int n)
{
d=d%n;
int gc=gcd(d,n);
for(int i=0;i<gc;i++)
{
    int temp=arr[i];
    int j=i,k;
while (1)
{
    k=j+d;
    if(k>=n)
    k=k-n;
    
    if(k==i)
    break;

    arr[j]=arr[k];
    j=k;
}

    arr[j]=temp;
}
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    rotate(arr,2,n);
   for(int i=0;i<9;i++)
   cout<<arr[i];

}