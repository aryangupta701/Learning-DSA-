#include<iostream>
using namespace std;
int main ()
{
    int arr[20],size , i, res,x=1,res1,pos;
    cout<<"Enter the number of elements";
    cin>>size;
    for(i=0;i<size;i++)
    {
    cin>>arr[i];
    if(i==0)
    res=arr[i];
    else 
    {
        res=res^arr[i];
    }
    }
 
for(i=0;;i++)
{
x=1;
x<<i;
if(res&x!=0)
break;

}
pos=i;
res=0;
res1=0;
for(i=0;i<size;i++)
{
if(arr[i]<<pos & 1 == 1 )
res = res^arr[i];
else res1= res1^arr[i];
}
cout<<res<<endl<<res1;
return 0;

}