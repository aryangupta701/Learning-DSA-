#include<iostream>
using namespace std;
int matrix( int m, int n);
int main ()
{
    int m, n;
    cin>>m>>n;

    cout<<matrix(m,n);
    return 0;
}

int matrix ( int m , int n )
{
    if(m==1 || n==1)
    return 1;
    else return matrix(m-1,n)+matrix(m,n-1);
}