#include<iostream>
using namespace std;
bool searchpair(int a[], int s, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        break;
    }
int l=i+1;
int r=i;

while(l!=r)
{
    if(a[l]+a[r]==s)
    return true;
    else if(a[l]+a[r]<s)
    l=(l+1)%n;
     else if(a[l]+a[r]>s)
    r=(n+r-1)%n;


}
return false ;

}
int main()
{
    int a[]={9,10,1,2,3,4,5,6,7,8};
int n=10,s;
cout<<"Enter the sum : ";
cin>>s;
cout<<searchpair(a,s,n);
return 0;
}