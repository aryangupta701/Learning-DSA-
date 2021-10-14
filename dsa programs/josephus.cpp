#include<iostream>
using namespace std;\
int count(int n, int k);


int main ()
{
    int k, n;
    cin>>n>>k;
    cout<< count(n,k);
}

int count(int n, int k)
{
     if(n==1)
     return 0;
     else return (count(n-1,k)+k ) % n ;
}