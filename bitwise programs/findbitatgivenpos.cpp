//program to find the bit value at given position in a number
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter number : ";
    cin>>num;
    int pos ;
    cout<<"Enter pos :";
    cin>>pos;
    pos--;
    int x=1<<pos;
    cout<<x;
     if(x&num==1)
      cout<<"1";
     else cout<<"0";
    return 0;
}