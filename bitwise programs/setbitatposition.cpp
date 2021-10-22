//program to set bit in a given number

#include<iostream>
using namespace std;

int main()
{
    int num,pos;
    cout<<"Enter number : ";
    cin>>num;
    cout<<"Enter position : ";
    cin>>pos;
    int x=1<<(pos-1);
    cout<<(num|x);
    return 0;
}