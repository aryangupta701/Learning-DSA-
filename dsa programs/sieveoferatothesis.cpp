#include<iostream>
#include<math.h>
using namespace std;
int* sieveoferatothesis (int );
int main ()
{
int n,i;
cin>>n;
int *x;
x=(int*)malloc(100*sizeof(int));
x=sieveoferatothesis(n);
for(i=1;i<n;i++)
cout<<n<<"  "<<x[n]<<endl;

return 0;
}

int* sieveoferatothesis (int n)
{
    int j;
    int *y;
    y=(int*)malloc(100*sizeof(int));
    y[0]=0;
    for(j=1;j<=n;j++)
    y[j]=1;
for(int i=2; i<=sqrt(n);i++)
{
for(j=2;j<=n/i;j++)
{
    y[j*i]=0;
}
}
return y;
}