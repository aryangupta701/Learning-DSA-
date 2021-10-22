//program to tell weather a number is power of 2 or not
#include<iostream>
using namespace std;

int main(){
    int num ;
    cout<<"Enter the number : ";
    cin>>num;
    if(!(num&(num-1)) && num)
    cout<<"The number is the power of 2 ";
    else 
    cout<<"The number is not the power of 2 ";
    return 0;
}